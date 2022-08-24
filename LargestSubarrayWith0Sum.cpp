// Given an array having both positive and negative integers. The task is to compute the length of the largest subarray with sum 0.

// Input:
// N = 8
// A[] = {15,-2,2,-8,1,7,10,23}
// Output: 5
// Explanation: The largest subarray with
// sum 0 will be -2 2 -8 1 7.

class Solution
{
public:
    int maxLen(vector<int> &A, int n)
    {
        int maxi = 0;
        int sum = 0;
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            sum += A[i];
            if (sum == 0)
            {
                maxi = i + 1;
            }
            else if (mpp.find(sum) != mpp.end())
            {
                maxi = max(maxi, i - mpp[sum]);
            }
            else
            {
                mpp[sum] = i;
            }
        }
        return maxi;
    }
};

// Time Complexity: O(N), as we are traversing the array only once

// Space Complexity: O(N), in the worst case we would insert all array elements prefix sum into our hashmap
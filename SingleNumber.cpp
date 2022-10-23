// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only constant extra space.

// Example 1:

// Input: nums = [2,2,1]
// Output: 1
// Example 2:

// Input: nums = [4,1,2,1,2]
// Output: 4

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        unordered_map<int, int> mpp;
        for (auto x : nums)
        {
            mpp[x]++;
        }
        for (auto y : mpp)
        {
            if (y.second == 1)
            {
                return y.first;
            }
        }
        return -1;
    }
};

// Time complexity: O(n)
// Space complexity: O(1)
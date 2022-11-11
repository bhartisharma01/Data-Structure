// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

// Example 1:

// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2]
// Example 2:

// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [9,4]
// Explanation: [4,9] is also accepted.

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans;
        unordered_set<int> equalEle;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        for (int i = 0; i < nums1.size(); i++)
        {
            int low = 0;
            int high = nums2.size() - 1;
            while (low <= high)
            {
                int mid = low + (high - low) / 2;
                if (nums1[i] == nums2[mid])
                {
                    equalEle.insert(nums1[i]);
                    break;
                }
                else if (nums1[i] > nums2[mid])
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
        }
        for (auto x : equalEle)
        {
            ans.push_back(x);
        }
        return ans;
    }
};
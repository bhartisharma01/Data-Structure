// Given an integer array nums, return the third distinct maximum number in this array. If the third maximum does not exist, return the maximum number.

// Example 1:

// Input: nums = [3,2,1]
// Output: 1
// Explanation:
// The first distinct maximum is 3.
// The second distinct maximum is 2.
// The third distinct maximum is 1.
// Example 2:

// Input: nums = [1,2]
// Output: 2
// Explanation:
// The first distinct maximum is 2.
// The second distinct maximum is 1.
// The third distinct maximum does not exist, so the maximum (2) is returned instead.
// Example 3:

// Input: nums = [2,2,3,1]
// Output: 1
// Explanation:
// The first distinct maximum is 3.
// The second distinct maximum is 2 (both 2's are counted together since they have the same value).
// The third distinct maximum is 1.

class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        sort(nums.begin(), nums.end(), greater<int>());
        // Now we have remove the duplicate elements from the vector
        // by using STL
        nums.erase(unique(nums.begin(), nums.end()), nums.end());

        // by using only unique it will not delete the element if duplicate then return the duplicate largest element
        // [1,1,2]
        // Output: 1
        // expected: 2
        // std::unique(nums.begin(),nums.begin()+nums.size());

        if (nums.size() < 3)
        {
            //  if size of the array <3 then we can return the maximum element in an array
            return nums[0];
        }
        // otherwise we can  return the  num[3-1];

        return nums[2];
    }
};
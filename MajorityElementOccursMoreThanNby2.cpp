// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

// Example 1:

// Input: nums = [3,2,3]
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int count = 0;
        int el = 0;
        for (auto maj : nums)
        {
            if (count == 0)
            {
                el = maj;
            }
            if (maj == el)
            {
                count++;
            }
            else
                count--;
        }
        return el;
    }
};

// Time Complexity: O(N)

// Space Complexity: O(1)
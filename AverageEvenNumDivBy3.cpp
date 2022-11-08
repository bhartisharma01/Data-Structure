// Given an integer array nums of positive integers, return the average value of all even integers that are divisible by 3.

// Note that the average of n elements is the sum of the n elements divided by n and rounded down to the nearest integer.

// Example 1:

// Input: nums = [1,3,6,10,12,15]
// Output: 9
// Explanation: 6 and 12 are even numbers that are divisible by 3. (6 + 12) / 2 = 9.

class Solution
{
public:
    int averageValue(vector<int> &nums)
    {
        int count = 0, sum = 0, n = nums.size();

        for (int i = 0; i < n; i++)
        {
            if ((nums[i] % 2 == 0) && (nums[i] % 3 == 0))
            {

                ++count;
                sum += nums[i];
            }
        }

        return count ? sum / count : 0;
        // return sum/count;
    }
};

// Time complexity: O(n)
// Space complexity:O(1)
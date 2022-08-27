// Given an array nums of n integers, return an array of all the unique quadruplets[nums[a], nums[b], nums[c], nums[d]] such that :

//                                           0 <= a,
//     b, c, d < n a, b, c, and d are distinct.nums[a] + nums[b] + nums[c] + nums[d] == target You may return the answer in any order.

//                                                                                      Example 1 :

//     Input : nums = [ 1, 0, -1, 0, -2, 2 ],
//             target = 0 Output : [ [ -2, -1, 1, 2 ], [ -2, 0, 0, 2 ], [ -1, 0, 0, 1 ] ]

// fixed two pointers and rest of the target find using other two pointers

class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        vector<vector<int>> res;
        if (nums.empty())
            return res;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int front, back;
        for (int i = 0; i < n; i++)
        {
            long long target_3 = target - nums[i];
            for (int j = i + 1; j < n; j++)
            {
                long long target_2 = target_3 - nums[j];
                front = j + 1;
                back = n - 1;

                while (front < back)
                {
                    int two_sum = nums[front] + nums[back];
                    if (two_sum < target_2)
                        front++;
                    else if (two_sum > target_2)
                        back--;
                    else
                    {
                        vector<int> quadnums(4, 0);
                        quadnums[0] = nums[i];
                        quadnums[1] = nums[j];
                        quadnums[2] = nums[front];
                        quadnums[3] = nums[back];
                        res.push_back(quadnums);

                        while (front < back && nums[front] == quadnums[2])
                            ++front;
                        while (front < back && nums[back] == quadnums[3])
                            --back;
                    }
                }

                while (j + 1 < n && nums[j + 1] == nums[j])
                    ++j;
            }
            while (i + 1 < n && nums[i + 1] == nums[i])
                ++i;
        }
        return res;
    }
};

// Time Complexity: O(n³)
// Reason: There are 2 nested loops and the front pointer as well as the right pointer (Third nested loop)

// Space Complexity: O(1), (Generally the space complexity that is used to return the answer is ignored)
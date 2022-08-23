// Given an array of integers nums, find the next permutation of nums.

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {

        next_permutation(nums.begin(), nums.end());
        for (auto it : nums)
            cout << it;
        cout << endl;
    }
};

// Time Complexity:
// O(n * n!).

// Space Complexity:
// O(n * n!).
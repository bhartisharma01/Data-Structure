// Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.

// A height-balanced binary tree is a binary tree in which the depth of the two subtrees of every node never differs by more than one.

// Input: nums = [-10,-3,0,5,9]
// Output: [0,-3,9,-10,null,5]
// Explanation: [0,-10,5,null,-3,null,9] is also accepted:

class Solution
{
public:
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        if (nums.size() == 0)
            return NULL;
        return sortedArrayToBST(nums, 0, nums.size() - 1);
    }
    TreeNode *sortedArrayToBST(vector<int> &nums, int left, int right)
    {
        if (left > right)
            return NULL;
        if (left == right)
            return new TreeNode(nums[left]);
        int mid = (left + right) / 2;
        TreeNode *root = new TreeNode(nums[mid]);
        root->left = sortedArrayToBST(nums, left, mid - 1);
        root->right = sortedArrayToBST(nums, mid + 1, right);
        return root;
    }
};
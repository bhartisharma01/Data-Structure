// Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

// Integers in each row are sorted from left to right.
// The first integer of each row is greater than the last integer of the previous row.

// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
// Output: true

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {

        // int n = matrix.size();
        // int m = matrix[0].size();
        int low = 0;
        int high = (matrix.size() * matrix[0].size()) - 1;
        if (!matrix.size())
            return false;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (matrix[mid / matrix[0].size()][mid % matrix[0].size()] == target)
                return true;

            if (matrix[mid / matrix[0].size()][mid % matrix[0].size()] < target)
                low = mid + 1;

            else
                high = mid - 1;
        }
        return false;
    }
};

// Time complexity: O(log(m*n))

// Space complexity: O(1)
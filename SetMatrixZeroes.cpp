// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> dummy1(m, -1);
        vector<int> dummy2(n, -1);
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    dummy1[i] = 0;
                    dummy2[j] = 0;
                }
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (dummy1[i] == 0 || dummy2[j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

// Time Complexity: O(N*M + N*M)

// Space Complexity: O(N)
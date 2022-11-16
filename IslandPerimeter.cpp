// You are given row x col grid representing a map where grid[i][j] = 1 represents land and grid[i][j] = 0 represents water.

// Grid cells are connected horizontally/vertically (not diagonally). The grid is completely surrounded by water, and there is exactly one island (i.e., one or more connected land cells).

// The island doesn't have "lakes", meaning the water inside isn't connected to the water around the island. One cell is a square with side length 1. The grid is rectangular, width and height don't exceed 100. Determine the perimeter of the island.

// Input: grid = [[0,1,0,0],[1,1,1,0],[0,1,0,0],[1,1,0,0]]
// Output: 16
// Explanation: The perimeter is the 16 yellow stripes in the image above.

// find how many 1 in the map. If without the consideration of surrounding cells, the total perimeter should be the total amount of 1 times 4.
// find how many cell walls that connect with both lands. We need to deduct twice of those lines from total perimeter

class Solution
{
public:
    int islandPerimeter(vector<vector<int>> &grid)
    {
        int cell = 0, repeat = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == 1)
                {
                    cell++;
                    if (i != 0 && grid[i - 1][j] == 1)
                    { // checking above cell
                        repeat++;
                    }
                    if (j != 0 && grid[i][j - 1] == 1)
                    { // checking previous cell
                        repeat++;
                    }
                }
            }
        }
        return 4 * cell - repeat * 2; // subtracting common side
    }
};

// Time complexity: O(n^2)
// space complexity:O(1)
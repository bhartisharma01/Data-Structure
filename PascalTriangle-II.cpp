// Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.

// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:


 

// Example 1:

// Input: rowIndex = 3
// Output: [1,3,3,1]
// Example 2:

// Input: rowIndex = 0
// Output: [1]

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int i;
        vector<vector<int>> r(rowIndex+1);
        for( i =0; i<=rowIndex;i++){
            r[i].resize(i+1);
            r[i][0]=r[i][i]=1;
             for(int j =1;j<i;j++){
                r[i][j] = r[i-1][j-1]+r[i-1][j];
            }
        }
       
          return r[i-1]; 
        
    }
};
// Given an array of integers A and an integer B.

// Find the total number of subarrays having bitwise XOR of all elements equals to B.

// Input 1:

//  A = [4, 2, 2, 6, 4]
//  B = 6
 
int Solution::solve(vector<int> &A, int B) {
    // int n = A.size();
    // int sum =0;
    // int count =0;
    // for(int i =0;i<n;i++){
    //     int current_xor =0;
    //     for(int j =i; j<n;j++){
    //         current_xor ^=A[j];
    //         if(current_xor == B)
    //         count++;
            
    //     }
    // }
    
    // return count;
// Time Complexity: O(N2)

// Space Complexity: O(1)


  unordered_map<int,int>visited;
    int cpx = 0;
   int c=0;
    for(int i=0;i<A.size();i++){
        cpx^=A[i];
        if(cpx==B) c++;
        int h = cpx^B;
        if(visited.find(h)!=visited.end()){
            c=c+visited[h];
        }
        visited[cpx]++;
    }
    return c;
}

// Time Complexity: O(N)

// Space Complexity: O(N)

// NOTE: the complexity of worst-case searching for an unordered_map can go up to O(N), hence it is safer to use ordered_map. 
// But if we use ordered_map then the time complexity will be O(N logN). Space complexity will be the same in both cases.
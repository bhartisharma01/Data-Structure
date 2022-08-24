#include <bits/stdc++.h>

using namespace std;
  int findDuplicate(vector<int>& nums) {
         sort(nums.begin(),nums.end());
         for(int i=1; i< nums.size();i++){
             if(nums[i]==nums[i-1])
                 return nums[i];
         }
         return -1;
     }
int main()
{
    vector<int> arr;
    arr = {23, 4, 45, 45, 56};
    cout << "The duplicate element is " << findDuplicate(arr) << endl;
}

// There is only one repeated number in nums, return this repeated number.

// You must solve the problem without modifying the array nums and uses only constant extra space.

// Input: nums = [1,3,4,2,2]
// Output: 2
#include <bits/stdc++.h>

using namespace std;
int findDuplicate(vector<int> &nums)
{
    // sorting method for all elements
    //  sort(nums.begin(),nums.end());
    //      for(int i=1; i< nums.size();i++){
    //          if(nums[i]==nums[i-1])
    //              return nums[i];
    //      }
    //      return -1;

    // frequency array method if elements between 1 to 9 according to the leetcode question conditions
    int n = nums.size();
    int freq[n + 1] = {
        0};
    for (int i = 0; i < n; i++)
    {
        if (freq[nums[i]] == 0)
        {
            //            cout << freq[arr[i]];
            freq[nums[i]] += 1;
        }
        else
        {
            return nums[i];
        }
    }
    return 0;
}
int main()
{
    vector<int> arr;
    arr = {23, 4, 45, 45, 56};
    cout << "The duplicate element is " << findDuplicate(arr) << endl;
}

// For sorting:
// Time Complexity:O(Nlogn + N)

// Reason: NlogN for sorting the array and O(N) for traversing through the array and checking if adjacent elements are equal or not. But this will distort the array.

// Using Frequency array:
// Time Complexity: O(N), as we are traversing through the array only once.

// Space Complexity: O(N), as we are using extra space for frequency array.
// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

 

// Example 1:

// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
 
      int lastNonZeroAt =0;
          // If the current element is not 0, then we need to
    // append it just in front of last non 0 element we found. 
      for(int i =0;i<nums.size();i++){
          if(nums[i] != 0)
          nums[lastNonZeroAt++] = nums[i];
      }
      	// After we have finished processing new elements,
 	// all the non-zero elements are already at beginning of array.
 	// We just need to fill remaining array with 0's.
      for(int i =lastNonZeroAt;i<nums.size();i++){
          nums[i]=0;
      }
    }
};

// Time complexity: O(n)
// space complexity : O(1)
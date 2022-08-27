// Given an integer array of size n, find all elements that appear more than ⌊ n / 3 ⌋ times.

//                                                                                 Example 1 :

//     Input : nums = [ 3, 2, 3 ] Output : [3] Example 2 :

//     Input : nums = [1] Output : [1] Example 3 :

//     Input : nums = [ 1, 2 ] Output : [ 1, 2 ]

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int totalElements = nums.size();
        int num1 = -1, num2 = -1, count1 = 0, count2 = 0;
        for(int i =0; i<nums.size();i++){
            if(nums[i] == num1)
                count1++;
            else if(nums[i]==num2)
                count2++;
            else if(count1 == 0){
                num1= nums[i];
                count1 =1;
            }
            else if(count2 == 0){
                num2 = nums[i];
                count2=1;
            }
            else{
                count1--;
                count2--;
            }
            
        }
        // After getting the 2 majority elements, checking whether the occurence is more than n/3 or not 
        vector <int> ans;
        count1=count2=0;
        for(int i =0;i<nums.size();i++){
            if(nums[i] == num1){
                count1++;
            }
            else if(nums[i] == num2){
                count2++;
            }
            
        }
        if(count1 > totalElements/3)
            ans.push_back(num1);
        if(count2 > totalElements/3)
            ans.push_back(num2);
        return ans;
        
    }
};

// Time Complexity: O(n)

// Space Complexity: O(1)
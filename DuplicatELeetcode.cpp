/*Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
Example 1:
Input: nums = [1,2,3,1]
Output: true
Example 2:
Input: nums = [1,2,3,4]
Output: false*/
//code

/*class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // if(nums.size()<2){return false;}
        sort(nums.begin(),nums.end());
        int start=0;
        for(int i=1;i<nums.size();i++){
            if(nums[start]==nums[i])
            // if(nums[i]==nums[i+1])
            {
                return true;
            }
            start++;
           
        }
        return false;
        }
};*/
/*Gi
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve thven an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
is problem without using the library's sort function.
Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:

Input: nums = [2,0,1]
Output: [0,1,2]*/
/*class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0;
        int j=0;
         int k= nums.size()-1;
         while(j<=k){
            if(nums[j]==0){
                swap(nums[i],nums[j]);
                i++;
                j--;           }
                 else if(nums[j]==1){
                j++;
            }
            else{
                swap(nums[j],nums[k]);
                k--;
            }
         }
    }
};*/
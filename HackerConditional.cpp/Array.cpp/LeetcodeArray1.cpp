// Given an array of integers nums, return the number of good pairs.
// A pair (i, j) is called good if nums[i] == nums[j] and i < j.
// Example 1:
// Input: nums = [1,2,3,1,1,3]
// Output: 4
// Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int result = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    result++;
                }
            }
        }
        return result;
    }
};
int main(){
    
    // Solution solution();
    // vector<int>nums1;
//code
    // return 0;
}
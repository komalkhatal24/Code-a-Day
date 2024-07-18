/*Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".
Example 1:
Input: strs = ["flower","flow","flight"]
Output: "fl"*/

/*class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       sort(strs.begin(),strs.end());
        string ans="";
        string S=strs[0];
         string E=strs[strs.size()-1];
        for(int i=0;i<min(S.size(),E.size());i++){
           if(S[i]!=E[i]){
                return ans;
            }else{
               ans=ans+S[i];
            }
        }
        return ans;
    }
};*/
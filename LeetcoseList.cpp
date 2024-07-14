/*Example 1:

Input: s = "III"
Output: 3
Explanation: III = 3.
Example 2:

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.*/

class Solution {
public:
    int romanToInt(string s) {
       
        unordered_map<char,int>m{{'I',1},{'V',5},{'X',10},{
            'L',50},{'C',100},{'D',500},{'M',1000}};
        int ans=0;
       for (int i=0;i<s.size();i++){
        if(m[s[i]]<m[s[i+1]]){
        ans=ans-m[s[i]];}
        else{
            ans=ans+m[s[i]];
        }
       }
        return ans;
    }
    };
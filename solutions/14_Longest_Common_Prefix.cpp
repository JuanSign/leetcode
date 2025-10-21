class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        for(string i : strs){
          if(ans == "") break;
          int ii = 0;
          while(ii < ans.length() && ans[ii] == i[ii]) ii++;
          ans = ans.substr(0, ii);
        }
        return ans;
    }
};

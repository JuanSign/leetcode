class Solution {
public:
    string convert(string s, int numRows) {
      if(numRows==1) return s;
      if(numRows==2){
        string ans = "";
        for(int i = 0; i < s.length(); i += 2) ans += s[i];
        for(int i = 1; i < s.length(); i += 2) ans += s[i];
        return ans;
      }
      int n = s.length();
      int zig = 2*numRows-2;
      int numCols = (n+zig+1)/zig;
      string ans = "";
      for(int i = 0; i < numRows; i++){
        for(int j = 0; j < numCols; j++){
          if(j*zig+i < n)
            ans += s[j*zig+i];
          if(i != 0 && i != numRows-1){
            if(j*zig+2*numRows-i-2 < n)
              ans += s[j*zig+2*numRows-i-2];
          }
        }
      }
      return ans;
    }
};

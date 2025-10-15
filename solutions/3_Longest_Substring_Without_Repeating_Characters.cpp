class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       if(s.length() == 0) return 0;
       int ans = 1;
       int start = 0;
       map<char,int> lastSeen;
       for(int i = 0; i < (int)s.length(); i++){
         if(lastSeen.find(s[i]) != lastSeen.end() && lastSeen[s[i]] >= start){
           ans = max(ans, i-start);
           start = lastSeen[s[i]]+1;
         }
         lastSeen[s[i]] = i;
       }

       return max(ans, (int)s.length()-start);
    }
};

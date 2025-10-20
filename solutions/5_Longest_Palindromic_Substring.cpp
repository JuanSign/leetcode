class Solution {
public:
    string longestPalindrome(string s) {
        string t = prepare(s);
        vector<int> p = manacher(t);
        int maxP = 0;
        int bestC = -1;

        for(int i = 0; i < p.size(); i++){
          if(p[i] > maxP){
            maxP = p[i];
            bestC = i;
          }
        }

        int L = (bestC-maxP)/2;
        int R = (bestC+maxP)/2;

        return s.substr(L, R-L);
    }

private:
    vector<int> manacher(string t){
      vector<int> p(t.length());
      int c = 0;
      for(int i = 1; i < t.length()-1; i++){
        int rB = c+p[c];
        int mI = c-(i-c);
        if(rB > i) p[i] = min(rB-i, p[mI]);
        while(t[i+1+p[i]] == t[i-1-p[i]]) p[i]++;
        if(i+p[i] > rB) c = i;
      }
      return p;
    }

    string prepare(string s){
      string S;
      s = '@'+s+'&';
      for(int i = 0; i < s.length()-1; i++){
        S += s[i];
        S += '#';
      }
      S += s.back();
      return S;
    }
};

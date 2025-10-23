class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<vector<char>> C = {
          {'a','b','c'}, {'d','e','f'}, {'g','h','i'},
          {'j','k','l'}, {'m','n','o'}, {'p','q','r','s'},
          {'t','u','v'}, {'w','x','y','z'}
        };

        vector<string> ans = {""};

        for(char d : digits){
          vector<string> temp;
          for(string s : ans){
            for(char c : C[d-'2'])
              temp.push_back(s+c);
          }
          ans.swap(temp);
        }

        return ans;
    }
};

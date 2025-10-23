class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char i : s){
          if(i == '(' || i == '[' || i == '{') st.push(i);
          else{
            if(st.empty()) return false;
            if(i == ')'){
              if(st.top() != '(') return false;
              else st.pop();
            }
            if(i == ']'){
              if(st.top() != '[') return false;
              else st.pop();
            }
            if(i == '}'){
              if(st.top() != '{') return false;
              else st.pop();
            }
          }
        }
        return st.empty();
    }
};

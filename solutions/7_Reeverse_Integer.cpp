class Solution {
public:
    int reverse(int x) {
      int reversed = 0;
      while(x != 0){
        if(reversed > INT_MAX/10 || reversed < INT_MIN/10) return 0;
        int last = x%10;
        reversed = reversed*10 + last;
        x /= 10;
      }
      return reversed;
    }
};

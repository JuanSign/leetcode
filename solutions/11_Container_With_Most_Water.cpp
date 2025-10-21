class Solution {
public:
    int maxArea(vector<int>& height) {
      int L = 0, R = height.size()-1;
      int ans = 0;
      while(L < R){
        int cur = min(height[L], height[R])*(R-L);
        ans = max(cur, ans);
        if(height[L] < height[R]) L++;
        else R--;
      }
      return ans;
    }
};

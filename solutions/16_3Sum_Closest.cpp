class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int ans = 1e5;
        int n = nums.size();

        for(int i = 0; i < n; i++){
          int L = i+1;
          int R = n-1;

          while(L < R){
            int cur = nums[i] + nums[L] + nums[R];
            if(cur == target) return cur;

            if(abs(cur-target) < abs(ans-target)) ans = cur;

            if(cur > target) R--;
            else L++;
          }
        }

        return ans;
    }
};

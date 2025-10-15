class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      map<int,int> valueToIndex;
      for(int i = 0; i < (int)nums.size(); i++){
        int x = target-nums[i];
        if(valueToIndex.find(x) != valueToIndex.end()){
          return {i, valueToIndex[x]};
        }
        valueToIndex[nums[i]] = i;
      }
      return {-1,-1};
    }
};

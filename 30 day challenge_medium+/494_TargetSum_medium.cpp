class Solution {
    int len, target;
public:
    int findTargetSumWays(vector<int>& nums, int tar) {
        target = tar;
        len = nums.size();
        if (len ==  0){
            return 0;
        }
        return dfs(nums, 0, 0);
        
    }
    map<pair<int, int>,int>dp;
    int dfs(vector<int>&nums, int curSum, int i){
        auto it = dp.find({curSum, i});
        if (it != dp.end()){
            return it->second;
        }
        if (i >= len && curSum == target){
            return 1;
        }if (i >= len){
            return 0;
        }
    return dp[{curSum, i}] = dfs(nums, curSum+nums[i], i+1) + dfs(nums, curSum-nums[i], i+1);
    
   }
};
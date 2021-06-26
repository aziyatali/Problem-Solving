class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 1){
            return nums[0];
        }
        if(nums.size() == 2){
            return max(nums[0], nums[1]);
        }
        vector<int>ans(nums.size()+1, 0);
        ans[0] = nums[0];
        ans[1] = nums[1];
        for (int i = 2; i < nums.size(); i++){
            ans[i] = max(ans[i-2]+nums[i], ans[i-1]);
        }
        return ans[nums.size()-1];
    }
};

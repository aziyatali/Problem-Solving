class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int>res(nums.size(), 0);
        res[0] = nums[0];
        int sum = res[0];
        for (int i = 1; i < nums.size(); i++){
            res[i] = max(res[i-1] + nums[i], nums[i]);
            sum = max(sum, res[i]);
        }
        return sum;
    }
};
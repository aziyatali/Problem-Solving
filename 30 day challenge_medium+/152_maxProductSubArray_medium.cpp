class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxSum;
        vector<int>res(nums.size(), 1);
        res[0] = nums[0];
        maxSum = res[0];
        cout<<res[0]<<" ";
        for (int i = 1; i < nums.size(); i++){
            res[i] = max(nums[i], res[i-1] * nums[i]);
            cout<<res[i]<<" ";
            maxSum = max(maxSum, res[i]);
        }
        return maxSum;
    }
};
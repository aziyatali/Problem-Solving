class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reach = 0, n = nums.size()-1;
        for (int i = 0; i <= n && i <= reach; i++){
            // from cur position to from position + jump
            reach = max(i+nums[i], reach);
        }
        return reach >= n; 
    }
};

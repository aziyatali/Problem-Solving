class Solution {
public:
    int rob(vector<int>& nums) {
//         Time limit exceeds
        return robber(nums, nums.size()-1);
    }
    int robber(vector<int>& nums, int i){
        if ( i < 0){
            return 0;
        }
        return max(robber(nums, i-2)+nums[i], robber(nums, i-1));
    }
};

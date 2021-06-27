class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 1){
            return nums[0];
        }
        vector<int>left(nums.size(), 0);
        vector<int>right(nums.size(), 0);
        left[0] = 0;
        left[1] = nums[0];
        right[0] = 0;
        right[1] = nums[1];
        
        for(int i = 1; i < nums.size()-1; i++){
            left[i+1] = max(left[i-1]+nums[i], left[i]);
            right[i+1] = max(right[i-1]+nums[i+1], right[i]);
        }
        return max(left[nums.size()-1], right[nums.size()-1]);
        
    }
};

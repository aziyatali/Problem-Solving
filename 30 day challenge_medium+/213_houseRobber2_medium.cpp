class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 1){
            return nums[0];
        }
        vector<int>left(nums.size(), 0);
        vector<int>right(nums.size()+1, 0);
        left[0] = 0;
        left[1] = nums[0];
        right[nums.size()] = 0;
        right[nums.size()-1] = nums[nums.size()-1];
        
        for(int i = 1; i < nums.size()-1; i++){
            left[i+1] = max(left[i-1]+nums[i], left[i]);
        }
        
        for (int j = nums.size()-1; j > 1; j--){
            right[j-1] = max(right[j+1]+nums[j], right[j]);
        }
        return max(left[nums.size()-1], right[1]);
        
    }
};

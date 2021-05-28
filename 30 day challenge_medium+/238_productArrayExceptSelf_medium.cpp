class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>left(nums.size(), 1);
        vector<int>right(nums.size(), 1);
        vector<int>ans;
        int len = nums.size()-1;
        for (int i = 1; i < nums.size(); i++){
            left[i] = left[i-1] * nums[i-1];
            right[len-i] = right[len-i+1] * nums[len-i+1];
        }
        
        for (int i = 0; i < nums.size(); i++){
            ans.push_back(right[i] * left[i]);
        }
        
        return ans;
        
    }
};
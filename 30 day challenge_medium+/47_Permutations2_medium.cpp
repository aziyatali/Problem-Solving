class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        if (nums.size() == 0){
            return {};
        }
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        permute(nums, 0, ans);
        return ans;
    }
    void permute(vector<int> &nums, int idx,  vector<vector<int> >&ans){
        if(idx == nums.size()-1){
            ans.push_back(nums);
        }
        for(int i = idx; i < nums.size(); i++){
            if (i > idx &&  nums[idx] == nums[i])
                continue;
            swap(nums[i], nums[idx]);
            permute(nums, idx+1, ans);
            // swap(nums[i], nums[idx]);
        }
        
        for (int i = nums.size()-1; i > idx; --i){
            swap(nums[i], nums[idx]);
        }
    }
};

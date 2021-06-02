class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        unordered_map<int, int>hash;
        vector<vector<int>>res;
        vector<int>ans;
        for (int i = 0; i < nums.size(); i++){
            int threeSum = target - nums[i];
            int j = i+1;
            while (j < nums.size()-1){
                int twoSum = threeSum-nums[j];
                int tar = twoSum - nums[j+1];
                auto it = hash.find(tar);
                if (it != hash.end() && it->first != i && it->first != j){
                    ans.clear();
                    ans.push_back(nums[i]);
                    ans.push_back(nums[j]);
                    ans.push_back(nums[j+1]);
                    ans.push_back(nums[it->second]);
                    res.push_back(ans);
                }
                j++;
            }
            hash[i] = nums[i];
        }
        
        return res;
    }
};
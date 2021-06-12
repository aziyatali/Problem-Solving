class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>res;
        recPerm(nums, 0, res);
        return res;
    }
    void recPerm(vector<int>nums, int beg, vector<vector<int>>&res){
        if (beg >= nums.size()){
            res.push_back(nums);
            return;
        }
        for (int i = beg; i < nums.size(); i++){
            // change for each case
            swap(nums[beg], nums[i]);
            // change the changed case
            recPerm(nums, beg+1, res);
            // reset the previus values
            swap(nums[beg], nums[i]);
        }
    }
};
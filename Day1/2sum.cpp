class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>hash;
        vector<int>res = {0,0};
        for (int i = 0; i < nums.size(); i++){
            int a = nums[i];
            int b = target - a;
            auto val = hash.find(b);
            if (val != hash.end()){
                res[0] = hash[b];
                res[1] = i;
            }
        hash[a] = i;

        }
        return res;
    }
};
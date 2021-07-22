class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        vector<int>res(2, 0);
        for (int i = 0; i < nums.size(); i++){
            
            int a = target - nums[i];
            auto it = hash.find(a);
            
            if (it != hash.end()){
                 res[0] = i;
                 res[1] = it->second;
            }else{
                hash[nums[i]] = i;
            }
        }
        return res;
        
    }
};
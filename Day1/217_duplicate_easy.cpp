class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int>hash;
        for (int i = 0; i < nums.size(); i++){
            hash[nums[i]] = i;
        }
        return hash.size() == nums.size() ? false : true;
    
        
    }    
};



















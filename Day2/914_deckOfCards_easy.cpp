class Solution {
public:
    bool hasGroupsSizeX(vector<int>& nums) {
        if (nums.size() < 2){
            return false;
        }
        unordered_map<int, int>hash;
        for (int i = 0; i < nums.size(); i++){
            hash[nums[i]]++;
        }
        int tempComp = -1, ansComp = -1, count = 0;
        for (auto it = hash.begin(); it != hash.end(); it++){
            tempComp = it->second;
            if (tempComp < 2 || tempComp!= ansComp){
                return false;                
            }
            cout<<"it: "<<tempComp;
            ansComp = tempComp;
        }
        return true;
    }
};
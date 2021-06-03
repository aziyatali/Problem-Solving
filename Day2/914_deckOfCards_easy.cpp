class Solution {
public:
    bool hasGroupsSizeX(vector<int>& nums) {
        int res = 0;
        unordered_map<int, int>hash;
        for (auto i : nums){
            hash[i]++;
        }
        for (auto i : hash){
            res = __gcd(i.second, res);
        }
        return res > 1;
    }
};
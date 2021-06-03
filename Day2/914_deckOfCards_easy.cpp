class Solution {
public:
    int gcd(int a, int b){
        if (b == 0){
            return a;
        }
        return gcd(b, a%b);
    }
    
    bool hasGroupsSizeX(vector<int>& nums) {
        int res = 0;
        unordered_map<int, int>hash;
        for (auto i : nums){
            hash[i]++;
        }
        for (auto i : hash){
            res = gcd(i.second, res);
        }
        return res > 1;
    }
};
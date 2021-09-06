class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int>hash(501, 0);
        int ans = 0;
        for (auto t: time){
            ans+=hash[(600-t)%60];
            hash[t%60]++;
        }
        return ans;
    }
};

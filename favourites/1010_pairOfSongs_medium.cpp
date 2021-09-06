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

// class Solution {
// public:
//     int numPairsDivisibleBy60(vector<int>& time) {
//         unordered_map<int, int>umap;
//         int ans = 0;
//         for (auto t: time){
//             auto it = umap.find((600-t)%60);
//             if (it!=umap.end())
//                 ans+=it->second;
//             umap[t%60]++;
//         }
//         return ans;
//     }
// };

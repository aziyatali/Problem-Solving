class Solution {
public:
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
        int sz = paths.size();
        vector<int>res;
        vector<int>ans(n+1, 0);
        for (int i = 0; i < sz; i++){
            ans[paths[i][0]]++;
            ans[paths[i][1]]++;
        }
        
        for (int i = 1; i <= n; i++){
            if (ans[i] <= n){
                res.push_back(i);
            }
        }
        return res;
    }
};

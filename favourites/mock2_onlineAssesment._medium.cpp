class Solution {
public:
    int numTilePossibilities(string tiles) {
        vector<int>ans(26, 0);
        for (int i = 0; i < tiles.size(); i++){
            ans[tiles[i] - 'A']++;
        }
        return dfs(ans);
        
    }
    int dfs(vector<int>ans){
        int res = 0;
        
    for (int i = 0; i < 26; i++){
                if (ans[i] == 0){
            continue;
        }
        res++;
        ans[i]--;
        res += dfs(ans);
        ans[i]++;
    }
        return res;
  }
};

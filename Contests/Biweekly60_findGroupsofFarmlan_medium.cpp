class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>>ans;
        vector<int>temp(4, 0);
        for (int i = 0; i < land.size(); i++){
            for (int j = 0; j < land[0].size(); j++){
                if (land[i][j] == 1){
                    temp[0] = i;
                    temp[1] = j;
                    temp[2] = i;
                    temp[3] = j;
                    helper(land, i, j, temp);
                    ans.push_back(temp);
                    temp[0] = 0;
                    temp[1] = 0;
                    temp[2] = 0;
                    temp[3] = 0;
                }
            }
        }
        return ans;
    }
    void helper(vector<vector<int>>&land, int i, int j, vector<int>&temp){
        if(i < land.size() && j < land[0].size() && land[i][j] == 1){
            temp[2] = max(temp[2], i);
            temp[3] = max(temp[3], j);
            land[i][j] = 0;
            helper(land, i+1, j, temp);
            helper(land, i, j+1, temp);
        }
    }
};

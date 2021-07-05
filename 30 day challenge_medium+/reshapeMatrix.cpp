class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<int>oneD;
        vector<vector<int>>ans(r, vector<int>(c, 0));
        for (int i = 0; i < mat.size(); i++){
            for (int j = 0; j < mat[i].size(); j++){
                oneD.push_back(mat[i][j]);
            }
        }
        
        for (int i = 0; i < r; i++){
            for (int j = 0; j < c; j++){
                ans[i][j] = oneD[i*r+j];
            }
        }
        return ans;
    }
};

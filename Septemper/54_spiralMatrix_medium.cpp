class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.size() == 0)
            return {};
        vector<int>ans;
        int rowBeg = 0, rowEnd = matrix.size()-1;
        int colBeg = 0, colEnd = matrix[0].size()-1;
        
        while( rowBeg <= rowEnd && colBeg <= colEnd){
            // traverse right
            for (int i = colBeg; i <= colEnd; i++){
                ans.push_back(matrix[rowBeg][i]);
            }
            rowBeg++;
            // traverse down
            for (int  i = rowBeg; i <= rowEnd; i++){
                ans.push_back(matrix[i][colEnd]);
            }
            colEnd--;
            // traverse left
            if (rowBeg <= rowEnd){
                for (int i = colEnd; i >= colBeg; i--){
                    ans.push_back(matrix[rowEnd][i]);
                }
                rowEnd--;
            }
            // traverse up
            if (colBeg <= colEnd){
                for (int i = rowEnd; i >= rowBeg; i--){
                    ans.push_back(matrix[i][colBeg]);
                }
                colBeg++;    
            }
        }
        return ans;
    }
};

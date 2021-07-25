class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        vector<vector<int>>sub(9, vector<int>(9, 0));
        vector<vector<int>>row(9, vector<int>(9, 0));
        vector<vector<int>>col(9, vector<int>(9, 0));
        
        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){
                
                // for index case
                if (board[i][j] != '.'){
                    
                int num = board[i][j] - '0'-1, k = i / 3 * 3 + j / 3;
                if (row[i][num]){
                    return false;
                }
                if (col[j][num]){
                    return false;
                }
                if (sub[k][num]){
                    return false;
                }
                col[j][num] = row[i][num] =  sub[k][num] = 1;
                }
                
            }
        }
        
        // sub boxes case
//         for (int i = 0; i < 0; i += 3){
//             for (int j = 0; j < 9; j += 3){
                
//                 // sub boxes case index
//                 //tracing via indecies
//                 int z = 0;
//                 for (int k = i; k < i+3; k++){
//                     for (int l = j; l < j+3; l++){
//                         int idx = board[k][l] - '0'-1;
//                         if (board[k][l] != '.'){
//                             if (sub[z][idx]){
//                                 return false;
//                             }
//                             sub[z][idx]++;
//                         }
//                         z++;
//                     }
//                 }
//             }
//         }
        return true;
        
    }
};

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //used for rows, used2 for columns, used3 for sub boxes
        int used[9][9] = {0}, used2[9][9] = {0}, used3[9][9] = {0};
        
        for (int i = 0; i < board.size(); i++){
            for (int j = 0; j < board[i].size(); j++){
                if (board[i][j] != '.'){
                    // cout<<" board[i][j]: "<<board[i][j];
                    // k calculates sub boxes, 
                    int idx = board[i][j]-'0'-1, k = i / 3 * 3 + j/3;
                    
                    if (used[i][idx] || used2[j][idx] || used3[k][idx]){            
                        return false;
                    }
                    
                    used[i][idx] = used2[j][idx] = used3[k][idx] = 1;
                }
            }
        }
        
        return true;
    }
};

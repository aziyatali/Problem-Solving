class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        // for sub-boxes
        
        for (int i = 0; i < 9; i+= 3){
            for (int j = 0; j < 9; j+= 3){
                set<char> st;
               for (int k = i; k < i + 3; k ++){
                   for(int l = j; l < j + 3; l ++){
                       
                       if(st.find(board[k][l]) != st.end())
                        return false;
                        st.insert(board[k][l]);
                   }
               }
            
            }
        }

        // for row check       
        map<pair<int, char>, int>row, col;
        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){
                if (board[i][j]!= '.'){

                    auto rw = make_pair(i, board[i][j]);
                    auto cl = make_pair(j, board[i][j]);

                    if(row[rw] == 0)
                        row[rw] ++;
                    else 
                        return false;

                    if(col[cl] == 0)
                        col[cl] ++;
                    else
                        return false;
                   
                    
                }
            }
    
        }
        
        return true;
        
    }
};


/*

    





*/

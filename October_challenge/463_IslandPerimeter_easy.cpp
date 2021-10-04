class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int count = 0, repeat = 0;
        for (int i = 0; i < grid.size(); i++){
            for (int j = 0; j < grid[0].size(); j++){
                if (grid[i][j] == 1){
                    count++;
                    if (i!= 0 && grid[i-1][j] == 1)
                        repeat++;
                    if (j!= 0 && grid[i][j-1] == 1)
                        repeat++;
                }
            
            }
        }
        // If two grids are connected their perimeter subtracted by two. 
        return count*4 - repeat*2;
    }
};

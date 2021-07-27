class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if (image[sr][sc] == newColor){
            return image;
        }
        fill(image, sr, sc, image[sr][sc], newColor);
        return image;
        
    }
    void fill(vector<vector<int>>&image, int i, int j, int color, int defCol){
        int m = image.size(), n = image[0].size();
        if (i < 0 || i >= m || j < 0 || j >= n || image[i][j] != color){
            return;
    }
        image[i][j] = defCol;
        fill(image, i+1, j, color, defCol);
        fill(image, i-1, j, color, defCol);
        fill(image, i, j+1, color, defCol);
        fill(image, i, j-1, color, defCol);
    }
};

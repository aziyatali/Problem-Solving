class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxCount = 0;
        int i = 0, j = height.size()-1;
        while(i < j) {
            maxCount = max(maxCount, (j-i) * min(height[i], height[j]));
            
            if (i < j && height[i] <= height[j]) i++;
            else if (i < j && height[i] > height[j]) j--;
        }
        return maxCount;
    }
};
class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int, int>umap;
        int res = 0;
        for (int i = 0; i < nums.size(); i++){
            for (int j = 0; j < i; j++){

                int prod = nums[i] * nums[j];
                res+=8 * umap[prod];
                umap[prod]++;
            }
        }
        return res;
    }
};

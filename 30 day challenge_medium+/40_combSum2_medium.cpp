class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& cand, int target) {
        vector<vector<int>>res;
        vector<int>comb;
        sort(cand.begin(), cand.end());
        
        combSum(cand, comb, res, 0, target);
        return res;
    }
    
    void combSum(vector<int>&cand, vector<int>&comb, vector<vector<int>>&res, int beg, int target){
        if (target == 0){
            res.push_back(comb);
        }
        for (int i = beg; i < cand.size() && target >= cand[i]; i++){
            if (i == beg || cand[i] != cand[i-1]){
                comb.push_back(cand[i]);
                combSum(cand, comb, res, i+1, target-cand[i]);
                comb.pop_back();   
            }
        }
      }
};
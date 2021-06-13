class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>combination;
        vector<vector<int>>res;
        sort(candidates.begin(), candidates.end());
        combSum(candidates, combination, target, res, 0);
        return res;
    }
    
    void combSum (vector<int>&cand,vector<int>&comb, int target, vector<vector<int>>&res, int beg){
        if (target == 0){
            res.push_back(comb);
        }
        
        for (int i = beg; i < cand.size() && target >= cand[i]; i++){
            comb.push_back(cand[i]);
            combSum(cand, comb, target-cand[i], res, i);
            comb.pop_back();
        }
    }
};
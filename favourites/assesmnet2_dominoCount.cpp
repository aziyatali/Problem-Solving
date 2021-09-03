class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        vector<int>top(7, 0);
        vector<int>bot(7, 0);
        int ans = -1, n = tops.size();
        for (int i = 0; i < n; i++){
            top[tops[i]]++;
            bot[bottoms[i]]++;
        }
        for (int i = 0; i < top.size(); i++){
            int sum = top[i] + bot[i];
            if (sum >= n){
                ans = min(top[i], bot[i]);
                int isValid = n;
                for (int j = 0; j < tops.size(); j++){
                    if (tops[j] == i && tops[j] == bottoms[j]){
                        ans--;
                    }
                    if (tops[j] == i || bottoms[j] == i){
                        isValid--;
                    }
                }
                return isValid == 0 ? ans: ans = -1;
            }
        }
        return ans;
    }
};

class Solution {
public:
    int countVowelStrings(int n) {
        int dp[] = {0,1,1,1,1,1};
        for (int i = 1; i <= n; i++){
            for (int k = 1; k < 6; k++){
            dp[k]+=dp[k-1];
            }
        }
        return dp[5];
        // dp[2] = dp[2]+dp[1];
        //3         2    1
        //6         3    3
        //10        4    6
        //15        5    10
    }
};
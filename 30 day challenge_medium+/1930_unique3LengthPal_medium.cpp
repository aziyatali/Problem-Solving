class Solution {
public:
    int countPalindromicSubsequence(string s) {
      vector<int>first(26, INT_MAX);
      vector<int>last(26, 0);
      int ans = 0;
      for (int i = 0; i < s.size(); i++){
          first[s[i]-'a'] = min(first[s[i]-'a'], i);
          last[s[i]-'a'] = i;
      }
        
        for (int i = 0; i < 26; i++){
            if (first[i] < last[i]){
                 ans += unordered_set<char>(begin(s) + first[i] + 1, begin(s) + last[i]).size();
            }
        }
     return ans;
    }
};

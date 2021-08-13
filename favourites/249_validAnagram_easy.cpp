class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>check(26, 0);
        // if sizes are not equal then they are not
        // anagrams by deffinition
        if (s.size() != t.size()){
            return false;
        }
      // create hash map size of 26 for all possible
      // lower case English letters
        for (int i = 0; i < s.size(); i++){
            int idx = s[i] - 97;
            int idx2 = t[i] - 97;
             check[idx]++;
             check[idx2]--;
        }
        for (int i = 0; i < check.size(); i++){
            // if there are excessive number then tney are not anagram
            if (check[i]!= 0){
                return false;
            }
        }
        return true;
        
    }
};

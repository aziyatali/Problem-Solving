class Solution {
public:
    string longestPalindrome(string s) {
        string ans;
        
        if (s.length() == 0)
            return {};
        int maxLen = 0, tempLen = 0;
        for (int i = 1; i < s.length(); i++){
            int l = i-1, r = i;
            while (l >= 0 && r < s.length() && s[l] == s[r] ){
                tempLen = max(tempLen, r-l+1);
                l--;
                r++;
            }
            if (tempLen > maxLen){
                maxLen = tempLen;
                ans = s.substr(l+1,r-l-1);
            }
            l = i-1; r = i+1;
            while(r < s.length() && l >=0 && s[l] == s[r]){
                tempLen = max(tempLen, r-l+1);
                l--;
                r++;
            }
            
            if (tempLen > maxLen){
                maxLen = tempLen;
                ans = s.substr(l+1,r-l-1);
            }
        }
        
        
        return maxLen != 0 ? ans : ans = s[0];
    }
};
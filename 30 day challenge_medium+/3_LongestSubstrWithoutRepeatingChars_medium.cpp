class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // for storing chars, symbols, spaces etc
        vector<int>hash(256, -1);
        // start is the last index where repeatance occured
        int start = -1, maxLen = 0;
        for (int i = 0; i < s.size(); i++){
            // if repeatance occured
            if (hash[s[i]] > start ){
                // start is the last occured index,
                // if index occured double it saves current index into hash[s[i]]
                start = hash[s[i]];
            } 
            // update index of s each time 
            hash[s[i]] = i;
            maxLen = max(maxLen, i - start);
        }
        return maxLen;
    }
};
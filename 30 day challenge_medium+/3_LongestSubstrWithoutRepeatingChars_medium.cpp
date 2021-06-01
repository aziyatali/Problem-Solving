class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int tempMax = 0, maxLen = 0;
        vector<int>hash(100, 0);
        for (int i = 0; i < s.size(); i++){
            int index = int(s[i]) - 32;
            cout<<"index: "<<index;
            if (hash[index] == 0){
                tempMax++;
            }
            else{
                maxLen = max(maxLen, tempMax);
                tempMax = 1;
                hash.clear();
                fill(hash.begin(), hash.end(),0);
            }
            hash[index]++;

        }
        return maxLen > tempMax ? maxLen : tempMax;
        
    }
};
class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int len = shifts.size();
        shifts[len-1] = shifts[len-1]%26;
        for (int i = len-2; i >= 0; i--){
            shifts[i] = (shifts[i+1]+shifts[i])%26;
        }

        for (int i = 0; i < len; i++){
            int newVal = (s[i]+shifts[i])%123;
            if (newVal < 97){
                newVal+=97;
            }
            s[i] = newVal;
        }
        
        return s;
    }
};

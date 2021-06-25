class Solution {
public:
    string multiply(string num1, string num2) {
        int len1 = num1.size(), len2 = num2.size();
        // create string with max size of answer 
        string ans(len1 + len2, '0');
            
        for (int i = len1-1; 0 <= i; --i){
            int carry = 0;
            for (int j = len2-1; 0 <= j; --j){
                int temp = (num1[i]-'0') * (num2[j]-'0') + (ans[i+j+1]-'0') + carry;
                ans[i+j+1] = temp % 10 + '0';
                carry = temp / 10;
            }
            ans[i]+=carry;
        }
        
        // if there are any leading zeros in the beginning of the answer,
        // then remove it
        for (int i = 0; i < len1 + len2; ++i){
            if (ans[i] != '0'){
                return ans.substr(i);
            }
            // if the both integers are zero then just return one '0'
            if (i == (len1+len2-1) && ans[i] == '0'){
                return "0";
            }
        }
        return ans;
    }
};

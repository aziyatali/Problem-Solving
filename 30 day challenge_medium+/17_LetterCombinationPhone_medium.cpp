class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        vector<string>res;
        for (int i = 0; i < digits.size(); i++){
            int cur = digits[i]-'0';
            cout<<cur<<" ";
            comb(cur, ans);
        }
        for (int i = 0; i < ans.size(); i++){
            for (int j = 0; j < ans[i].size(); j++){
                
            }
        }
        return ans;
        
    }
    
    void comb(int cur, vector<string> &ans){
        if (cur == 2){
            string two = "abc";
            ans.push_back(two);
        }
        else if (cur == 3){
            string three = "def";
            ans.push_back(three);
        }
        else if (cur == 4){
            string four = "ghi";
            ans.push_back(four);
        }
        else if (cur == 5){
            string five = "jkl";
            ans.push_back(five);
        }
        else if (cur == 6){
            string six = "mno";
            ans.push_back(six);
        }
        else if (cur == 7){
            string seven = "pqrs";
            ans.push_back(seven);
        }
        else if (cur == 8){
            string eight = "tuv";
            ans.push_back(eight);
        }
        else if (cur == 9){
            string nine = "wxyz";
            ans.push_back(nine);
        }
    }
};

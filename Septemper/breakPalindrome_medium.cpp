class Solution {
public:
    string breakPalindrome(string pal) {
        if (pal.size() == 1)
                return "";
        for (int i = 0; i < pal.size(); i++){
            int idx = pal[i];
            if (idx > 97){
                char ch = 97;
                pal[i] = ch;
                if (isPalindrome(pal)){
                    char ch = idx;
                    pal[i] = ch;
                    continue;
                }
                break;
            }
            else{
                if (i == pal.size()-1){
                    if (idx == 97){
                        char ch = idx +1;
                        pal[i] = ch;
                    }
                }
            }
        }
        return pal;
        
    }
    bool isPalindrome(string str){
        int left = 0, right = str.size()-1;
        while(left <= right){
            if(str[left] == str[right])
                left++, right--;
            else
                return false;
        }
        return true;
    }
};

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
        int sz = arr.size();
        vector<int> temp;
        int cur = 0;
        
        for(int i: arr){
            if(i == 0)
                temp.push_back(0), temp.push_back(0);
            else 
                temp.push_back(i);
        }
        
        for(int i = 0; i < sz; i ++){
            arr[i] = temp[i];
        }
    }
};

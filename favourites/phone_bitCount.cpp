class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<int>count(10001, 0);
        map<int, int>mp;
        vector<int>ans;
        for (int i = 0; i < arr.size(); i++){
            count[arr[i]]++;
        }
        for (int i = 0; i < arr.size(); i++){
            int num = arr[i];
            int sum = 0;
            while(num){
                sum+=num&1;
                num>>=1;
            }
            mp[arr[i]] = sum;
        }
        for (int i = 0; i < 16; i++){
            for (auto it = mp.begin(); it!=mp.end(); ++it){
                if (it->second == i){
                    ans.push_back(it->first);
                    while (count[it->first] > 1){
                        ans.push_back(it->first);
                        count[it->first]--;
                    }
                }
            }
        }
        
        return ans;
    }
    
  
};

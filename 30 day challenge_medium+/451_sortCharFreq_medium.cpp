class Solution {
public:
    string frequencySort(string s) {
        map<char, int>mp;
        string ans;
        for (int i = 0; i < s.length(); i++){
            mp[s[i]]++;
        }
        
        priority_queue<pair<int, char>>pq;
        
        for(auto it = mp.begin(); it!=mp.end(); it++){
            pq.push(make_pair(it->second, it->first));
        }
        
        for (auto it = mp.begin(); it!=mp.end(); it++){
            int k = pq.top().first;
            while(k > 0){
                ans.push_back(pq.top().second);
                k--;
            }
            pq.pop();
        }
    return ans;
        
    }
};
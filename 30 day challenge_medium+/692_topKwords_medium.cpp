class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int>mp;
        vector<string>ans;
        for (int i = 0; i < words.size(); i++){
            mp[words[i]]++;
        }
        
        priority_queue<pair<int, string>>pq;
        for (auto it = mp.begin(); it != mp.end(); it++){
            pq.push(make_pair(it->second, it->first));
            // if (pq.size() > mp.size()-k){
            //     ans.push_back(pq.top().second);
            //     pq.pop();
            //}
        }
        
        for (int i = 0; i < k; i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        return ans;
    }
};
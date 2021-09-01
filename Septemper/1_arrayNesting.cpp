class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int n = nums.size(); 
        vector<int>seen(n+1, 0);
        int i = 0, counter = 0, ans = 0;
        for (int i = 0; i < nums.size(); i++){
            int cur = i;
            counter = 0;
            while(seen[cur] == 0){
              seen[cur]++;
              cur = nums[cur];
              counter++;
            }
            ans = max(ans, counter);
        }
        
        return ans;
        
    }
};

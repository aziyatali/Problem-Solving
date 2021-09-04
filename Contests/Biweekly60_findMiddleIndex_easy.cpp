class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        if (nums.size() == 1){
            return 0;
        }
        int sum = 0;
        for (int i = 0; i < nums.size(); i++){
            sum+=nums[i];
        }
        for (int i = 0; i < nums.size(); i++){
            int half = sum-nums[i];
            
            if (half%2 == 0){
                int k = i-1, l = i+1;
                int lsum = 0, rsum = 0;
                while (k >= 0){
                    lsum+=nums[k];
                    k--;
                }
                while(l < nums.size()){
                    rsum+=nums[l];
                    l++;
                }
                if (lsum == rsum){
                    return i;
                }
            }
        }
        return -1;
        
    }
};

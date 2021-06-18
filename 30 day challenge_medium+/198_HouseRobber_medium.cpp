class Solution {
public:
    int rob(vector<int>& nums) {
        int odd = 0, even = 0;
        for (int i = 0; i < nums.size(); i++){
            if (i %2 == 0){
                even+=nums[i];
            }else{
                odd+=nums[i];
            }
        }
        return even>odd?even:odd;
        
    }
};

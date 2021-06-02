class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int left, right, tempClose = 0, resClose = INT_MAX, ans = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            int myTarget = target - nums[i];
            left = i+1, right = nums.size()-1;
            while(left < nums.size() && left<right){
                int myVal = nums[left] + nums[right];
                
                tempClose = abs(nums[i]+nums[left]+nums[right] - target);
                if(tempClose < resClose){
                    resClose = tempClose;
                    ans = nums[i]+nums[left]+nums[right];
                }    
                if (myVal > myTarget){
                    right--;
                }
                else{
                    left++;
                }
            }
        }
        return ans;
    }
};
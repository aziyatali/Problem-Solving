class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
      int left = 0, right = nums.size()-1;
       vector<int>ans = {-1, -1};
        while(left <= right){
            int mid = (right-left)/2 + left;
            if (target>=nums[left]){
                left = mid+1; 
            }
            else{
                right = mid-1;
            }
        }
        if (ans[left] == target){
            
        ans[0] = left;
        ans[1] = left+1;   
        }
        return ans;
            
    }
};

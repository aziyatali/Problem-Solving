class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
      int left = 0, right = nums.size()-1;
       vector<int>ans(2, -1);
        while(left < right){
            int mid = (right+left)/2;
            if (target > nums[mid]){
                left = mid+1; 
            }
            else{
                right = mid;
            }
        }
        
        if (nums[left] == target){
            ans[0] = left;
        }
        
        right = nums.size()-1;
        
        while (left < right){
            int mid  = (right+left)/2 + 1;
            if (nums[mid] > target){
                right = mid - 1;
            }else{
                left = mid;
            }
        }
        
        if (ans[right] == target){
            ans[1] = right;   
        }
        return ans;
            
    }
};

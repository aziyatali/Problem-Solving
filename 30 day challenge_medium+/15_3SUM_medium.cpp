class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if (nums.empty()){
            return {};
        }
        vector<int>res(3, 0);
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        for (int i = 0; i < nums.size(); i++){
            int target = -nums[i];
            int left = i+1;
            int right = nums.size()-1;
            while (left < right){
                int sum = nums[left] + nums[right];
                if (target > sum){
                    left++;
                }else if (target < sum){
                    right--;
                }else{
                    res[0] = nums[i];
                    res[1] = nums[left];
                    res[2] = nums[right];
                    ans.push_back(res);
                    
                    while (left < right && nums[left] == res[1]){
                        left++;
                    }
                    while(left < right && nums[right] == res[2]){
                        right--;
                    }
                    
                }
            }
            while (i+1 < nums.size() && nums[i] == nums[i+1]){
                i++;
            }
        }
        return ans;
    }
};
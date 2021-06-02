class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if (nums.size() < 4){
            return {};
        }
        sort(nums.begin(), nums.end());
        vector<vector<int>>res;
        for (int i = 0; i < nums.size()-1; i++){
            for (int j = i+1; j < nums.size(); j++){
                int twoSum = target - (nums[i] + nums[j]);
                int left = j+1, right = nums.size()-1;
                while(left < nums.size() && left < right){
                    vector<int>quad(4, 0);

                    int tar = nums[left] + nums[right];
                    if (tar > twoSum){
                        right--;
                    }
                    else if (tar < twoSum){
                        left++;
                    }
                    else{
                        quad[0] = nums[i];
                        quad[1] = nums[j];
                        quad[2] = nums[left];
                        quad[3] = nums[right];
                        res.push_back(quad);
                        while(left < nums.size()-1 && quad[2] == nums[left])left++;
                        while(right > left+1 && quad[3] == nums[right])right--;

                    }                    
                }
                while(j < nums.size()-1 && nums[j] == nums[j+1])j++;
                        }
            while(i < nums.size()-1 && nums[i] == nums[i+1])i++;
            
        }
        
        return res;
    }
};
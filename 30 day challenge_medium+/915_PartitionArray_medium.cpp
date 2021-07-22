class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int leftMax = nums[0], publicMax = nums[0], partIndex = 0;
        for (int i = 1; i < nums.size(); i++){
            if (leftMax > nums[i]){
                leftMax = publicMax;
                partIndex = i;
            }else{
                publicMax = max(publicMax, nums[i]);
            }
        }
        return partIndex + 1;
    }
};
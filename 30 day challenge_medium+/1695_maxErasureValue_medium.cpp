class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        // to save set of numbers in order
        unordered_set<int>uSet;
        int maxSum = 0, tempSum = 0;
        for (int i = 0, j = 0; i < nums.size(); i++){
            // we delete the all values before the current duplicate
            while(uSet.find(nums[i]) != uSet.end()){
                uSet.erase(nums[j]);
                tempSum-=nums[j];
                cout<<"current deleting: "<<nums[j]<< " ";
                j++;
            }
            uSet.insert(nums[i]);
            tempSum+=nums[i];
            maxSum = max(maxSum, tempSum);
        }
        return maxSum;
    }
};
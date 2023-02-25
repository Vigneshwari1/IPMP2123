class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int min = nums[0];
        int maxdiff = -1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<min) min = nums[i];
            else if(nums[i]-min > maxdiff && nums[i]!=min) maxdiff = nums[i]-min;
        }
        return maxdiff;
        
    }
};

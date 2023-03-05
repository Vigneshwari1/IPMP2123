class Solution {
public:
    void sortColors(vector<int>& nums) {
        int right = nums.size()-1;
        int left = 0;
        for(int i=0;i<nums.size() && left<nums.size();i++){
            if(nums[i]==0) swap(nums[i],nums[left++]);
        }
        for(int i=nums.size()-1;i>=0 && right>=0;i--){
            if(nums[i]==2) swap(nums[i],nums[right--]);
        }
    }
};

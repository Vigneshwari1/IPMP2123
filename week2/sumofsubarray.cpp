class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        map<int,int> modfreq;
        int sum =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%k==0){
            if(i<nums.size()-1 && nums[i+1]%k==0) return true;
            else continue;
            }
            sum = sum + nums[i];
            if(sum % k ==0) return true;
            else if(modfreq[sum%k]>0) return true;
            modfreq[sum % k]++;
        }
        return false;
    }
};

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int flag = 0;
        for(int i=0; i<nums.size();i++){
            sum = sum + nums[i];
            if(i==0) flag = 1;
        }
        if(flag == 1) return ((nums.size()*(nums.size()+1))/2) - sum ;
        else return 0;
    }
};

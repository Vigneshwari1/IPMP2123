class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int,int> sumvals;
        int sum =0;
        int maxdiff =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) sum = sum -1;
            else sum = sum + 1;
            if(sumvals.count(sum)) maxdiff = max(maxdiff, i - sumvals[sum]);
            else sumvals[sum] =i;

            if(sum == 0) maxdiff = max(maxdiff, i+1);

        }
        return maxdiff;
    }
};

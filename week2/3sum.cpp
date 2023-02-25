class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>temp;
        vector<vector<int>> soln;
        for(int i=0; i<nums.size();i++){
            for(int j=i+1, k=nums.size()-1; j<k;){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum == 0){
                    temp.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(sum>0)  k--;
                else j++;
            }
        }
        for(auto i: temp){
            soln.push_back(i);
        }

        return soln;
        
    }
};

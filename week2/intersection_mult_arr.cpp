class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int,int> freq;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                freq[nums[i][j]]++;
            }
        }
        vector<int> soln;
        for(auto i: freq){
            if(i.second == nums.size()){
                soln.push_back(i.first);
            }
        }
        return soln;
    }
};

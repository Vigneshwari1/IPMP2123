class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }

        int maj=INT_MIN;
        int ans = 0;

        for(auto i: freq){
            if(i.second>maj){
                maj = i.second; 
                ans = i.first;
            }
        }
        
        return ans;
    }
};

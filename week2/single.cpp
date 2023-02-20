class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> m;
        for(int i: nums){
            m[i] = m[i]+1;
        }
        for(auto i: m){
            if(i.second%2 !=0 ) return i.first;
        }

        return 0;
        
    }
};

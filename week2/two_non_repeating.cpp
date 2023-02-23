class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int,int> m;
        for(int i: nums){
            if(m.find(i)!=m.end()){
                m.erase(i);
            }
            else{
                m[i]=1;
            }
        }
        vector<int> v;
        for(auto i: m){
            v.push_back(i.first);
        }
        return v;
    }
};

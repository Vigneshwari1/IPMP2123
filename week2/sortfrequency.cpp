class Solution {
public:
    static bool cmp1(pair<int,int> a,pair<int,int> b){
        return (a.second < b.second);
    }
    static bool cmp2(pair<int,int> a,pair<int,int> b){
        return (a.first > b.first);
    }
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int> freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        vector<pair<int,int>> maps;
        for(auto i: freq){
            maps.push_back({i.first,i.second});
        }
        sort(maps.begin(),maps.end(),cmp2);
        stable_sort(maps.begin(),maps.end(),cmp1);
        vector<int> soln;
        for(int i=0;i<maps.size();i++){
            for(int j=0;j<maps[i].second;j++) soln.push_back(maps[i].first);
        }
        return soln;
    }
};

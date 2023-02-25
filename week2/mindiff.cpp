class Solution {
    
public:
    static bool sortcol(const vector<int> & v1,const vector<int> & v2){ return v1[0] < v2[0];}
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> soln;
        sort(arr.begin(),arr.end());
        int mindiff = INT_MAX;
        for(int i=1;i<arr.size();i++){
            int diff = arr[i]-arr[i-1];
            if(diff>0 && mindiff>diff){
                mindiff = diff;
                soln.clear();
            }
            if(mindiff == diff) soln.push_back({arr[i-1],arr[i]});
        }

        return soln;
    }
};

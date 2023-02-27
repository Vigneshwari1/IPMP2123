class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<pair<int,int>> pos;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    pos.insert({i,j});
                }
            }
        }
        for(auto i:pos){
            for(int p=0;p<matrix[0].size();p++) {matrix[i.first][p]=0;} //cout<<i.first<<" "<<p<<endl;}
            for(int q=0;q<matrix.size();q++) {matrix[q][i.second]=0;} //cout<<q<<" "<<i.second<<endl;}
        }
    }
};

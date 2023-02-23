class Solution {
public:
    int countTriples(int n) {
        int count =0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                    int sq = i*i + j*j;
                    int k = sqrt(sq);
                    if(sq == k*k && k<=n) count++;
            }
        }

        return count;
    }
};

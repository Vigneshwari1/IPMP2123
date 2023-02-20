class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int maxdiff = 0;
        for(int i : prices){
            if(i<min) min = i;
            else if(i-min > maxdiff) maxdiff = i-min;
        }

        return maxdiff;
    }

};

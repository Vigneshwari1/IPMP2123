class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> soln;
        int prod = 1;
        for(int i=0;i<nums.size();i++){ //prod of left
            soln.push_back(prod);
            prod = nums[i]*prod;
        }
        prod = 1;
        for(int j=nums.size()-1;j>=0;j--){ // prod of left * right
            soln[j] = prod * soln[j];
            prod = nums[j] * prod;
        }

        return soln;

    }
};

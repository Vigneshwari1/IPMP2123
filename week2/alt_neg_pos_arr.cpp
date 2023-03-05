class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos =0;
        int neg =1;
        vector<int> soln(nums.size());
        for(int i=0; i<nums.size() && (pos<nums.size() || neg<nums.size()) ;i++){
            if(nums[i]>0){
                soln[pos]=nums[i];
                pos=pos+2;
            }
            if(nums[i]<0){
                soln[neg]=nums[i];
                neg=neg+2;
            }
        }
        return soln;
    }
};

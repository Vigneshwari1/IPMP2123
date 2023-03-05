class Solution {
public:
    vector<int> copy;
    vector<int> shuffled;
    Solution(vector<int>& nums) {
        shuffled = copy = nums;
    }
    
    vector<int> reset() {
        return copy;
    }
    
    vector<int> shuffle() {
        for(int i=0;i<copy.size();i++){
            int j= i + (rand()%(copy.size()-i));
            swap(shuffled[i],shuffled[j]);
        }
        return shuffled;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */

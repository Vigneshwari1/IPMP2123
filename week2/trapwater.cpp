class Solution {
public:
    int trap(vector<int>& height) {
       vector<int>leftmax(height.size());
       vector<int>rightmax(height.size());
       int trapsum = 0;
       for(int i=1;i<height.size();i++) leftmax[i] = max(height[i-1],leftmax[i-1]);
       for(int j=height.size()-2; j>=0 ;j--) rightmax[j] = max(height[j+1],rightmax[j+1]);
       for(int k=0;k<height.size();k++){
           int level = min(leftmax[k],rightmax[k]) - height[k];
           if(level>0) trapsum = trapsum + level;
       }
       return trapsum;
    }
};

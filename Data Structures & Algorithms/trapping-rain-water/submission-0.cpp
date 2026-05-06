class Solution {
public:
    int trap(vector<int>& height) {
       if(height.empty()){
            return 0;
       }
       int res = 0;
       for(int i=0;i<height.size();i++){
        int lmx = height[i];
        int rmx = height[i];
            for(int j=0;j<i;j++){
                lmx = max(lmx,height[j]);
            }
            for(int j=i+1;j<height.size();j++){
                rmx = max(rmx,height[j]);
            }
            res += min(lmx , rmx) - height[i];
       }
       return res;
    }
};

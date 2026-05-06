class Solution {
    public int trap(int[] height) {
        if(height.length == 0){
            return 0;
        }
        int[] lmx = new int[height.length];
        int[] rmx = new int[height.length];
        
        lmx[0] = height[0];
        for(int i=1;i<height.length;i++){
            lmx[i] = Math.max(lmx[i-1],height[i]);
        }
        rmx[height.length-1] = height[height.length-1];
        for(int j = height.length-2;j>=0;j--){
            rmx[j] = Math.max(rmx[j+1],height[j]);
        }
        int res = 0;
        for(int i=0;i<height.length;i++){
            res += Math.min(lmx[i],rmx[i]) - height[i];
        }
        return res;
    }
}

class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps=0, currentend=0, maxfar=0;
        for(int i=0; i<nums.size()-1;++i){
            maxfar= max(maxfar, i+nums[i]);
            if(i==currentend){
                ++jumps;
                currentend=maxfar;
                if(currentend>=nums.size()-1){
                    break;
                }
            }
        }
        return jumps;
    }
};
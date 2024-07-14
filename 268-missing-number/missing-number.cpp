class Solution {
public:
    #define ll long long

    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        int xr1 = 0;
        int xr2 = 0;

        for(int i=1; i<=n; i++) {
            xr1 = xr1^nums[i-1];
            xr2 = xr2^i;
        } 

        return xr1^xr2; 
    }
};
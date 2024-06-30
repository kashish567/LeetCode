class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> mp;
        int length=nums.size();
        for(int i=0;i<length;i++){
            mp[nums[i]]++;
        }
        int totalSum=0;
        for(int i=0;i<length;i++){
            if(mp[nums[i]]==1)
            totalSum+=nums[i];

        }
        return totalSum;
    }
};
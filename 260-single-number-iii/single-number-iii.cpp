class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> singleEles;
        map<int,int> mp;
        for(int i=0; i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]==1){
                singleEles.push_back(nums[i]);
            }
        }
        return singleEles;
    }
};
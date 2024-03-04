class Solution {
public:
    int maxFrequency(std::vector<int>& nums, int k) {
        std::sort(nums.begin(), nums.end()); 
        int maxFreq = 1;
        int left = 0;
        long long sum = 0; 
        for (int right = 1; right < nums.size(); ++right) {
         
            sum += (long long)(nums[right] - nums[right - 1]) * (right - left);
        
            while (sum > k) {
                sum -= nums[right] - nums[left];
                ++left;
            }
            
         
            maxFreq = std::max(maxFreq, right - left + 1);
        }
        
        return maxFreq;
    }
};
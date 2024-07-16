class Solution {
public:
    int myAtoi(string s) {
    int i = 0;
        int n = s.size();
        
       
        while (i < n && isspace(s[i])) {
            ++i;
        }
        
        
        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') {
                sign = -1;
            }
            ++i;
        }
        
        long long result = 0;
        while (i < n && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');
            
            // Step 4: Handle overflow and underflow
            if (result * sign > INT_MAX) {
                return INT_MAX;
            }
            if (result * sign < INT_MIN) {
                return INT_MIN;
            }
            ++i;
        }
        
        return static_cast<int>(result * sign);
    }


};
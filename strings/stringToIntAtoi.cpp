class Solution {
public:
    int myAtoi(string s) {
        int i = 0, sign = 1, num = 0;
        
        // Skip leading whitespace
        while (i < s.size() && s[i] == ' ') {
            i++;
        }
        
        // Check for sign
        if (i < s.size() && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '+') ? 1 : -1;
            i++;
        }
        
        // Convert digits to integer
        while (i < s.size() && isdigit(s[i])) {
            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && s[i] - '0' > 7)) {
                return sign == -1 ? INT_MIN : INT_MAX;
            }
            num = num * 10 + (s[i] - '0');
            i++;
        }
        
        return num * sign;
    }
};

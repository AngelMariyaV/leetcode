class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int n=s.size();
        int sign=1;
        int result=0;
        while(i<n && s[i]==' ' ){
            i++;
        }
        if(i<n && (s[i]=='+' || s[i]=='-')){
            sign =(s[i]=='-')? -1 : 1;
            i++;
        }
        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';
            if (result > (INT_MAX - digit) / 10) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            
            result = result * 10 + digit;
            i++;
        }
        
        return result * sign;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
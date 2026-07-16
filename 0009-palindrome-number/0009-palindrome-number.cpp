class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;  

        long long rev = 0, num = x;
        while(num) {
            rev = rev * 10 + num % 10;  
            num /= 10;
        }
        return rev == x;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
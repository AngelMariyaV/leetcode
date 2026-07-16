class Solution {
public:
    double myPow(double x, int n) {
        double pow = 1;
        while (n) {
            if (n % 2) pow = n > 0 ? pow * x : pow / x;
            x = x * x;
            n /= 2;
        }
        return pow;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
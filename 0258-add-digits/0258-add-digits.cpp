class Solution {
public:
    int addDigits(int num) {
        int n= num;
        int x,y;
        while (n>9){
            x=n/10;
            y=n%10;
            n=x+y;
        }
        return n;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
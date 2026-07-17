class Solution {
public:
    int mySqrt(int x) {
        int ans, l=1,r=x/2, mid; 
        if (x<2){
            return x;
        } 
        while (l<=r){
            mid = l+(r-l)/2;
            long long sr= (long long) mid*mid;

            if (sr==x){
                return mid;
            } else if (sr<x){
                l=mid+1;
            } else {
                r=mid-1;
            }
            
        }
        return r;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
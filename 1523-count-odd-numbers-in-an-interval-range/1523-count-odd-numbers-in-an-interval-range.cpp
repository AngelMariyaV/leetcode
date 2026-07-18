class Solution {
public:
    int countOdds(int low, int high) {
        int count=0;
        int x=low;
        while (x<=high){
            if (x%2==1){
                count+=1;
            }
            x++;
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
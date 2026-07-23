class Solution {
    public int numTrees(int n) {
        long ans = 1;

        for(int i=0; i<n; i++){
            ans = ans * (2 * n - i)/(i + 1);
        }
        return (int) (ans / (n + 1));
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
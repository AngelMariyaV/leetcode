class Solution {
    public String countAndSay(int n) {
        return impl(n);
    }
    public String impl(int n){
        if (n == 1){
            return "1";
        }
        String temp = impl(n-1);
        int prev = 0;
        int curr = 0;
        int size = temp.length();
        String ans = "";

        while (curr<size){
            while (curr<size && temp.charAt(prev) == temp.charAt(curr)){
                curr++;
            }
            ans = ans+(curr-prev);
            ans = ans+temp.charAt(prev);
            prev = curr;
        }
        return ans;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
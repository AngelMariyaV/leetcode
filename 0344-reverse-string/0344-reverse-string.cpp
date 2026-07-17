class Solution {
public:
    void reverseString(vector<char>& s) {
        int l=0;
        int r=s.size()-1;
        while(l<=r){
            swap(s[l],s[r]);
            l++;
            r--;
        }  
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
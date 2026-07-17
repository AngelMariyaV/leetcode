class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> count;
        for(char c: s){
            count[c]++;
        }
        for(int i=0; i<s.length(); i++){
            if(count[s[i]]==1) return i;
        }

        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
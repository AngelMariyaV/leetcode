class Solution {
public:
    bool detectCapitalUse(string word) {
        int count=0;
        for (int i=0;i<word.size();i++){
            if (isupper(word[i])){
                count++;
            }
        }
        if (count==0 ||count==word.size()){
            return true;
        }else if (count == 1 && isupper(word[0])){
            return true;
        }else{
            return false;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> kwc;
        int m= candies[0];
        for (int i=1;i<candies.size();i++){
            if(candies[i]>m){
                m=candies[i];
            }
        }
        for (int j=0;j<candies.size();j++){
            if ((candies[j]+ extraCandies) >=m){
                kwc.push_back(true);
            }else{
                kwc.push_back(false);
            }
        }
        return kwc;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
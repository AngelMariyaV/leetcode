class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> final;
        for (int i=0;i<prices.size();i++){
            int discount = 0;
            for (int j=i+1;j<prices.size();j++){
                if (prices[i]>=prices[j]){
                    discount = prices[j];
                    break;
                }
            }
            final.push_back(prices[i]-discount);
        }
        return final;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
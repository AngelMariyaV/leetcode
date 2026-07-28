class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total= numBottles;
        int bal= numBottles;
        while(bal>=numExchange){
            int newb= bal/numExchange;
            total+=newb;
            bal= newb +(bal% numExchange);
        }
        return total;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
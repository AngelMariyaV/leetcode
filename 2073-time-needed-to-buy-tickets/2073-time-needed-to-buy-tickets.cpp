class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int t=0;
        while (tickets[k]>0){
            for(int i=0;i<tickets.size();i++){
                if (tickets[i]==0){
                    continue;
                }else{
                    tickets[i]-=1;
                    t++;
                }
                if (tickets[k]==0){
                    return t;
                }
            }
        }
        return t;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
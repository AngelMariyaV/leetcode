class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=0;
        int high=0;
        for ( int w: weights){
            low=max(low,w);
            high+=w;
        }
        while(low<high){
            int mid=(low+high)/2;
            int daysN=1;
            int currW=0;

            for (int w: weights){
                if(currW +w > mid){
                    daysN++;
                    currW=0;
                }
                currW+=w;
            }
            if (daysN>days){
                low=mid+1;
            }else{
                high=mid;
            }
        }
        return low;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r=1;
        int mid;
        long hrs;
        for (int pile : piles){
            r=max(r,pile);
        }
        int ans=r;
        while (l<=r){
            mid=l+(r-l)/2;
            hrs=0;
            for (int pile : piles){
                hrs+=(pile+mid-1)/mid;
            }
            if (hrs<=h){
                ans =mid;
                r=mid-1;
            } else{
                l=mid+1;
            }
        } 
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
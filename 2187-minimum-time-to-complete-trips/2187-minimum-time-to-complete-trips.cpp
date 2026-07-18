class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long l= 1;
        long long r= 1e14; 
        long long ans = r;
        
        while (l<=r) {
            long long mid = l + (r-l)/ 2;
            long long trips=0;
            for (int t : time) {
                trips += mid /t;
                if (trips >= totalTrips) {
                    break;
                }
            }
            if (trips >=totalTrips) {
                ans = mid;
                r = mid -1;
            } else {
                l= mid+ 1;
            }
        }
        
        return ans;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
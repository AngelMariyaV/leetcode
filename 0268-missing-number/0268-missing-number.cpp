class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x=0;
        int n=nums.size();
        while (x<=n){
            bool found = false;
            for(int i=0;i<n;i++){
                if (x==nums[i]){
                    found = true;
                    break;
                }
            }
            if (!found) {
                return x;
            }
            x++;
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
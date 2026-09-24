class Solution {
public:
    int trap(vector<int>& height) {
        int l=0, r=height.size()-1;
        int lMax = 0, rMax = 0;
        int totalWater = 0;

        while (l < r) {
            if (height[l] < height[r]) {
                if (height[l] >= lMax) {
                    lMax = height[l];
                } else {
                    totalWater += lMax - height[l];
                }
                l++;
            } else {
                if (height[r] >= rMax) {
                    rMax = height[r];
                } else {
                    totalWater += rMax - height[r];
                }
                r--;
            }
        }

        return totalWater;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
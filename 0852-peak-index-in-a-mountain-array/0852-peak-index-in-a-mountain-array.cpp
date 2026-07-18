class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=0;
        int r= arr.size()-1;
        int mid=l+(r-l)/2;;
        while(l<r){
            if (arr[mid]<arr[mid+1]){
                l=mid+1;
            } else {
                r=mid;
            }
            mid= l+(r-l)/2;
        }
        return l;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
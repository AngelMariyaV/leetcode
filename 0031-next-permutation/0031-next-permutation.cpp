class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int p=-1;
        for (int i=n-2;i>=0;i--){
            if(nums[i]< nums[i+1]){
                p=i;
                break;
            }
        }    
        if(p!=-1){
            for(int i=n-1;i>p;i--){
                if(nums[i]>nums[p]){
                    swap(nums[p],nums[i]);
                    break;
                }
            }
        }
        reverse(nums.begin()+p+1,nums.end());
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
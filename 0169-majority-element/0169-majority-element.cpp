class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candi=0;
        int count=0;
        for(int num:nums){
            if (count==0){
                candi=num;
            }
            if(num==candi){
                count++;
            }else{
                count--;
            }
        }
        return candi;    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
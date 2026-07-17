class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long f=LLONG_MIN;
        long long s=LLONG_MIN;
        long long t=LLONG_MIN;
        for(int num:nums){
            if(f==num||s==num||t==num){
                continue;
            }
            if(num>f){ 
                t=s;
                s=f;
                f=num;
            }
            else if(num>s){
                t=s;
                s=num;
            }else if(num>t){
                t=num;
            }
        }
        return t==LLONG_MIN?f:t;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
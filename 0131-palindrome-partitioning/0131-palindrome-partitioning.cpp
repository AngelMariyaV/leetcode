class Solution {
public:
    vector<vector<string>> ans;

    bool ispalindrome(string& s,int l,int r){
        while (l<r){
            if(s[l] != s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
 

    void sol(int idx, string& s, vector<string>& temp){
        if (idx== s.size()){
            ans.push_back(temp);
            return ;
        }
        for(int i=idx; i<s.size();i++){
            if (ispalindrome(s,idx,i)){
                temp.push_back(s.substr(idx, i-idx+1));
                sol(i+1, s, temp);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> temp;
        sol(0,s,temp);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
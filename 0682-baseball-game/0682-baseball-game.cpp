class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;
        for (int i=0; i<operations.size(); i++) {
            if (operations[i]=="+") {
                int n=record.size();
                record.push_back(record[n-1] + record[n-2]);
            } 
            else if (operations[i]=="D") {
                int n=record.size();
                record.push_back(record[n-1]*2);
            } 
            else if (operations[i]=="C") {
                record.resize(record.size() - 1); 
            } 
            else {
                record.push_back(stoi(operations[i])); 
            }
        }
        
        int result=0;
        for (int i=0; i<record.size(); i++) {
            result += record[i];
        }
        
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
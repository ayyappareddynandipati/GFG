//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    /*You are required to complete below function */
    string multiplyStrings(string& s1, string& s2) {
        // Your code here
        if (s1.empty() || s2.empty()) return "0";

        // Determine the sign
        int sign = 1;
        if (s1[0] == '-') {
            sign *= -1;
            s1 = s1.substr(1);
        }
        if (s2[0] == '-') {
            sign *= -1;
            s2 = s2.substr(1);
        }
    
        // Remove leading zeros
        s1.erase(0, s1.find_first_not_of('0'));
        s2.erase(0, s2.find_first_not_of('0'));
    
        if (s1.empty() || s2.empty()) return "0";
    
        int n1 = s1.size(), n2 = s2.size();
        vector<int> result(n1 + n2, 0);
    
        // Perform multiplication in a reversed manner
        for (int i = n1 - 1; i >= 0; --i) {
            for (int j = n2 - 1; j >= 0; --j) {
                int mul = (s1[i] - '0') * (s2[j] - '0');
                int sum = mul + result[i + j + 1];
    
                result[i + j] += sum / 10;
                result[i + j + 1] = sum % 10;
            }
        }
    
        // Build the final string
        string res;
        int i = 0;
        // Skip leading zeros
        while (i < result.size() && result[i] == 0) ++i;
        for (; i < result.size(); ++i)
            res += (result[i] + '0');
    
        if (res.empty()) return "0";
        return (sign == -1 ? "-" : "") + res;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string a;
        string b;
        cin >> a >> b;
        Solution obj;
        cout << obj.multiplyStrings(a, b) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends
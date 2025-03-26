//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int romanToDecimal(string &s) {
        // code here
        unordered_map<char, int> romanMap = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},{'C', 100}, {'D', 500}, {'M', 1000}};

        int res = 0;
        for (int i = 0; i < s.length(); i++) {

            // If the current value is less than the next value, 
            // subtract current from next and add to res
            if (i + 1 < s.length() && romanMap[s[i]] < romanMap[s[i + 1]]) {
                res += romanMap[s[i + 1]] - romanMap[s[i]];

                // Skip the next symbol
                i++;
            }
            else {

                // Otherwise, add the current value to res
                res += romanMap[s[i]];
            }
        }

        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends
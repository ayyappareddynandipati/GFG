//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    bool isDivisible(string& s) {
        // code here
        int rem = 0;
        for (char c : s) {
            int bit = c - '0'; // Convert char to int
            rem = (rem * 2 + bit) % 3;
        }
        return rem == 0;
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
        if (ob.isDivisible(s))
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends
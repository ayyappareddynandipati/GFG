//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int myAtoi(char *s) {
        // Your code here
        int i = 0, n = strlen(s);
        long result = 0;
        int sign = 1;
    
        // Step 1: Skip leading whitespaces
        while (i < n && s[i] == ' ') i++;
    
        // Step 2: Handle sign
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
    
        // Step 3: Process digits
        while (i < n && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');
    
            // Step 4: Check for overflow
            if (sign == 1 && result > INT_MAX) return INT_MAX;
            if (sign == -1 && -result < INT_MIN) return INT_MIN;
    
            i++;
        }
    
        return sign * result;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        char s[20];
        cin >> s;
        Solution ob;
        int ans = ob.myAtoi(s);
        cout << ans << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends
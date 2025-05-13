//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int nCr(int n, int r) {
        // code here
        if (r > n) return 0;
    
        // Initialize a 1D array to store results of subproblems
        int C[r + 1] = {0};
        C[0] = 1; // Base case: nC0 = 1
    
        // Calculate value of Binomial Coefficient in bottom up manner
        for (int i = 1; i <= n; i++) {
            // Compute next row of Pascal's triangle using previous row
            for (int j = min(i, r); j > 0; j--)
                C[j] = C[j] + C[j - 1];
        }
    
        return C[r];
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, r;
        cin >> n >> r;

        Solution ob;
        cout << ob.nCr(n, r) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
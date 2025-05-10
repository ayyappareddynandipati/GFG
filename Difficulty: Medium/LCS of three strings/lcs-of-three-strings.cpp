//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:

    int LCSof3(string& s1, string& s2, string& s3) {
        // your code here
        int n1=s1.size(),n2=s2.size(),n3=s3.size();
        int dp[21][21][21] = {0}; // max size is 20 for each string

        for (int i = 1; i <= n1; ++i) {
            for (int j = 1; j <= n2; ++j) {
                for (int k = 1; k <= n3; ++k) {
                    if (s1[i-1] == s2[j-1] && s2[j-1] == s3[k-1])
                        dp[i][j][k] = 1 + dp[i-1][j-1][k-1];
                    else
                        dp[i][j][k] = max({dp[i-1][j][k], dp[i][j-1][k], dp[i][j][k-1]});
                }
            }
        }

        return dp[n1][n2][n3];
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        // int n1, n2, n3; cin >> n1 >> n2 >> n3;
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        cin.ignore();
        Solution obj;
        cout << obj.LCSof3(s1, s2, s3) << endl;

        cout << "~"
             << "\n";
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
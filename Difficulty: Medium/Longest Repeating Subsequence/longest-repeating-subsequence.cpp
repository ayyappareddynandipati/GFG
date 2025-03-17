//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int LongestRepeatingSubsequence(string &s) {
        // Code here
        int n = s.size()+1;
        string s1=s,s2=s;
        vector<vector<int>>dp(n,vector<int>(n,0));
        for(int i=1;i<n;i++){
            for(int j=1;j<n;j++){
                if(s1[i-1]==s2[j-1] && i-1!=j-1){
                    dp[i][j]=dp[i-1][j-1]+1;
                }else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n-1][n-1];
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string str;
        cin >> str;
        Solution obj;
        int ans = obj.LongestRepeatingSubsequence(str);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
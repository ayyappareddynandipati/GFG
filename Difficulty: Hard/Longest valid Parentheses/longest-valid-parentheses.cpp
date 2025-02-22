//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxLength(string& s) {
        // code here
        int upper=0,lower=0;
        int maxi=0;
        for(int i=0;i<s.size();i++){
            s[i]=='(' ? upper++ : lower++;
            if(upper==lower){
                maxi=max(maxi,upper*2);
            }
            else if(upper<lower){
                upper=lower=0;
            }
        }
        upper=lower=0;
        for(int i=s.size()-1;i>=0;i--){
            s[i]=='(' ? upper++ : lower++;
            if(upper==lower){
                maxi=max(maxi,upper*2);
            }
            else if(upper>lower){
                upper=lower=0;
            }
        }
        return maxi;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.maxLength(S) << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
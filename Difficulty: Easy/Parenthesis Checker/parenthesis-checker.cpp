//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isParenthesisBalanced(string& s) {
        // code here
        string res = "";
        for (char c : s) {
            if (!res.empty() && 
                ((c == ')' && res.back() == '(') || 
                 (c == '}' && res.back() == '{') || 
                 (c == ']' && res.back() == '['))) {
                res.pop_back();
            } 
            else {
                res += c;
            }
        }
        return res.empty();

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.isParenthesisBalanced(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> arrayForm(int a, int b, int c) {
        // code here
        vector<int> ans;
        ans.push_back(a);
        ans.push_back(b);
        ans.push_back(c);
        return ans;
    }

    string stringForm(int a, int b, int c) {
        // code here
        string v={};
        string A=to_string(a);
        string B=to_string(b);
        string C=to_string(c);
        v=A+B+C;
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution obj;
        vector<int> res = obj.arrayForm(a, b, c);
        for (auto x : res) cout << x << " ";
        cout << "\n";
        cout << obj.stringForm(a, b, c) << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends
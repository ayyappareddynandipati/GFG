//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string countAndSay(int n) {
        // code here
        string current = "1";

        for (int i = 2; i <= n; ++i) {
            string next;
            int count = 1;
            for (int j = 1; j < current.size(); ++j) {
                if (current[j] == current[j - 1]) {
                    ++count;
                } else {
                    next += to_string(count) + current[j - 1];
                    count = 1;
                }
            }
            next += to_string(count) + current.back(); // last group
            current = move(next); // move instead of copy for performance
        }

        return current;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        cout << obj.countAndSay(n) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
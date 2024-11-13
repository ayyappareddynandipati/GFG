//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int reverseBits(int n) {
        // Your code here
        int ans = 0;
        
        for (int i = 0; i < 32; i++) {
            ans <<= 1;
            
            ans |= (n & 1);
            
            n >>= 1;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        cin >> n;
        cin.ignore();
        Solution ob;
        int res = ob.reverseBits(n);
        // print binary representation of the number as decimal might be different for
        // different languages
        for (int i = 31; i >= 0; i--) {
            cout << ((res >> i) & 1);
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends
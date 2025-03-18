//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int rTod(char c){
    return (c == 'I') ? 1 :
           (c == 'V') ? 5 :
           (c == 'X') ? 10 :
           (c == 'L') ? 50 :
           (c == 'C') ? 100 :
           (c == 'D') ? 500 :
           (c == 'M') ? 1000 : 0; // Default case if input is invalid

    }
    int romanToDecimal(string &s) {
        // code here
        int res=0;
        for(int i=0;i<s.length();i++){
            if(i+1<s.length() && rTod(s[i])<rTod(s[i+1])){
                res+=rTod(s[i+1])-rTod(s[i]);
                i++;
            }else{
                res+=rTod(s[i]);
            }
        }
        return res;
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
        cout << ob.romanToDecimal(s) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends
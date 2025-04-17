//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxLen(string& s) {
        // code here
        int maxlen=0;
        int open=0,close=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                open++;
            }else  if(s[i]==')'){
                close++;
            }
            if(open==close){
                maxlen=max(maxlen,2*close);
            }else if(open<close){
                open=0;
                close=0;
            }
        }
        open=close=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='('){
                open++;
            }else if(s[i]==')'){
                close++;
            }
            if(open==close){
                maxlen=max(maxlen,2*open);
            }else if(open>close){
                open=0;
                close=0;
            }
        }
        return maxlen;
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
        cout << ob.maxLen(S) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends
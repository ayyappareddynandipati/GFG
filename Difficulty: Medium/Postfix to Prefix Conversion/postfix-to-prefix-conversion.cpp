//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    bool isOperand(char c){
        return ((c>='A' && c<='Z') || (c>='a' && c<='z') || (c>='0' && c<='9'));
    }
    string postToPre(string post_exp) {
        // Write your code here
        stack<string> st;
        for(char c : post_exp){
            if(isOperand(c)){
                st.push(string(1,c));
            }else{
                string a = st.top();
                st.pop();
                string b = st.top();
                st.pop();
                string res = c + b + a;
                st.push(res);
            }
        }
        return  st.top();
    }
};


//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string postfix;
        cin >> postfix;

        // char marker; cin >> marker;

        Solution obj;
        cout << obj.postToPre(postfix) << endl;

        // cout << "~\n";
    
cout << "~" << "\n";
}
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends
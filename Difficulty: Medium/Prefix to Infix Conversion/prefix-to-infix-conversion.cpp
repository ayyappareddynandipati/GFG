//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    bool isOperand(char c) {
        return (c >= 'A' && c <= 'Z') ||  // Check if uppercase letter
               (c >= 'a' && c <= 'z') ||  // Check if lowercase letter
               (c >= '0' && c <= '9');    // Check if digit
    }
    string preToInfix(string pre_exp) {
        // Write your code here
        stack<string> st;
        for(int i=pre_exp.size()-1;i>=0;i--){
            char c = pre_exp[i];
            if(isOperand(c)){
                st.push(string(1,c));
            }else{
                string a = st.top();
                st.pop();
                string b = st.top();
                st.pop();
                string res = '(' + a + c + b + ')';
                st.push(res);
            }
        }
        return st.top();
    }
};



//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToInfix(prefix) << endl;

        // cout << "~\n";
    
cout << "~" << "\n";
}
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends
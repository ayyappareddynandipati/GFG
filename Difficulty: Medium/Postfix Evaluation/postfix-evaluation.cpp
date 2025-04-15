//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int evaluate(vector<string>& arr) {
        // code here
        stack<int>st;
        for(string a : arr){
            if(isdigit(a[0]) || (a.size()>1 && a[0]=='-')){
                st.push(stoi(a));
            }else{
                int b = st.top();
                st.pop();
                int c = st.top();
                st.pop();
                if(a=="+"){
                    st.push(c+b);
                }else if(a=="-"){
                    st.push(c-b);
                }else if(a=="*"){
                    st.push(c*b);
                }else{
                    st.push(c/b);
                }
            }
        }
        return st.top();
        
    }
};


//{ Driver Code Starts.

int main() {
    string str;
    getline(cin, str);
    int t = stoi(str);
    while (t--) {
        getline(cin, str);
        stringstream ss(str);
        vector<string> arr;
        while (ss >> str) {
            arr.push_back(str);
        }
        Solution ob;
        cout << ob.evaluate(arr) << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends
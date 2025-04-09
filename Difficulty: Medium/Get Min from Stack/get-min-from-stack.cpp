//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
        
        stack<int>st,minst;
    Solution() {
        // code here
    }

    // Add an element to the top of Stack
    void push(int x) {
        if (minst.empty() || x <= minst.top()) {
            minst.push(x);
        }
        st.push(x);
    }
    
    void pop() {
        if (!st.empty()) {
            if (!minst.empty() && minst.top() == st.top()) {
                minst.pop();
            }
            st.pop();
        }
    }
    
    int peek() {
        if (!st.empty())
            return st.top();
        return -1;
    }
    
    int getMin() {
        if (!minst.empty())
            return minst.top();
        return -1;
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int q;
        cin >> q;

        Solution ob;

        while (q--) {
            int qt;
            cin >> qt;

            if (qt == 1) {
                // push
                int att;
                cin >> att;
                ob.push(att);
            } else if (qt == 2) {
                // pop
                ob.pop();
            } else if (qt == 3) {
                // peek
                cout << ob.peek() << " ";
            } else if (qt == 4) {
                // getMin
                cout << ob.getMin() << " ";
            }
        }
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends
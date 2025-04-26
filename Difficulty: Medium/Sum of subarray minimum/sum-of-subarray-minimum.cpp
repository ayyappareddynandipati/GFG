//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    public:
        const int mod = 1e9 + 7;
        
        int sumSubarrayMins(vector<int>& arr) {
            int n = arr.size();
            vector<int> prev(n), next(n);
            stack<int> st;
            
            // Previous Less Element
            for (int i = 0; i < n; ++i) {
                while (!st.empty() && arr[st.top()] >= arr[i]) {
                    st.pop();
                }
                prev[i] = st.empty() ? -1 : st.top();
                st.push(i);
            }
    
            // Clear stack for reuse
            while (!st.empty()) st.pop();
    
            // Next Less Element
            for (int i = n - 1; i >= 0; --i) {
                while (!st.empty() && arr[st.top()] > arr[i]) {
                    st.pop();
                }
                next[i] = st.empty() ? n : st.top();
                st.push(i);
            }
    
            // Calculate total sum of minimums
            long long sum = 0;
            for (int i = 0; i < n; ++i) {
                long long left = i - prev[i];
                long long right = next[i] - i;
                sum = (sum + (arr[i] * left % mod) * right % mod) % mod;
            }

            return (int)sum;
    }
};



//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.sumSubarrayMins(arr);
        cout << res << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends
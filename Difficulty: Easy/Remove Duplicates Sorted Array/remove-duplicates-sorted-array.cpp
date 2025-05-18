//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int removeDuplicates(vector<int> &arr) {
        // code here
        int n = arr.size();
        if (n == 0) return 0;

        int write_index = 1;
    
        for (int read_index = 1; read_index < n; ++read_index) {
            if (arr[read_index] != arr[read_index - 1]) {
                arr[write_index] = arr[read_index];
                ++write_index;
            }
        }
    
        return write_index;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.removeDuplicates(arr);
        for (int i = 0; i < ans; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends
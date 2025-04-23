//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> singleNum(vector<int>& arr) {
        // Code here.
        long long xorr = 0;
        for(int i = 0; i < arr.size(); i++) {
            xorr = arr[i] ^ xorr;
        }

        int rightMost = (xorr & -xorr);

        int b1 = 0, b2 = 0;
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] & rightMost) b1 = b1 ^ arr[i];
            else b2 = b2 ^ arr[i];
        }
        return {min(b1, b2),max(b1, b2)};
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

        Solution ob;
        vector<int> ans = ob.singleNum(arr);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the minimum value required to balance the array.
    int minValueToBalance(vector<int> &arr) {
        // code here
        int sum1=0,sum2=0,n=arr.size();
        for(int i=0;i<n/2;i++)
        {
            sum1+=arr[i];
        }
        for(int j=n-1;j>=n/2;j--)
        {
            sum2+=arr[j];
        }
        return abs(sum1-sum2);
    }
};


//{ Driver Code Starts.

// Driver program to test above function
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
        int ans = ob.minValueToBalance(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends
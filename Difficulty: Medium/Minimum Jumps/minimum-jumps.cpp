//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // Your code here
        int n =arr.size();
        if (n<=1) return 0;
        if(arr[0]==0) return -1;
        int count=0,high=0,current=0;
        for(int i=0;i<n;i++)
        {
            high=max(high,i+arr[i]);
            if (i==current)
            {
                count++;
                current=high;
                if(current>=n-1) break;
            }
            if (i>=high)
            {
                return -1;
            }
            
        }
        return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, i, j;
        vector<int> arr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.minJumps(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends
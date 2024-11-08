//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//  Function to multiply the sum of first half of the array with the sum of second half
//  of the array
class Solution {
  public:
    int multiply(vector<int> &arr) {
        // code here
        int lsum=0,rsum=0;
        int size = arr.size();
        for(int i=0;i<size/2;i++)
        {
            lsum+=arr[i];
        }
        for(int i=size/2;i<size;i++)
        {
            rsum+=arr[i];
        }
        return lsum*rsum;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) // while testcases exist
    {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        cout << ob.multiply(arr) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends
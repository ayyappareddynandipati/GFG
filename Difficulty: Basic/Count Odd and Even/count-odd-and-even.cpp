//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    /*Function to count even and odd elements in the array
     * arr : Array with its elements
     */
    pair<int, int> countOddEven(vector<int> &arr) {
        // your code here
        int oddcount = 0;
    int evencount = 0;
    int n = arr.size();
    
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evencount++;
        } else {
            oddcount++;
        }
    }

    // Return a pair of odd and even counts
    return {oddcount, evencount};
    }
};

//{ Driver Code Starts.
int main() {

    // Testcase input
    int testcase;
    cin >> testcase;
    cin.ignore();

    while (testcase--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;

        pair<int, int> res = ob.countOddEven(arr);
        cout << res.first << " " << res.second << " ";
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends
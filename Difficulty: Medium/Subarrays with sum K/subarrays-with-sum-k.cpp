//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) {
        // code here
        int sum=0,cnt=0;
        unordered_map<int,int> freq;
        for(auto it : arr)
        {
            sum+=it;
            if(sum==k) cnt++;
            if (freq[sum-k]>0) cnt+=freq[sum-k];
            freq[sum]++;
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.countSubarrays(arr, k);
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends
//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // k is the maximum number of zeros allowed to flip
    int maxOnes(vector<int>& arr, int k) {
        // code here
        int l=0,r=0,maxi=0,zeroes=0;
        while(r<arr.size()){
            if(arr[r]==0){
                zeroes++;
            }
            if(zeroes>k){
                if(arr[l]==0){
                    zeroes--;
                }
                l++;
            }
            if(zeroes<=k){
                maxi=max(maxi,r-l+1);
            }
            r++;
        }
        return maxi;
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
        int m;
        cin >> m;
        cin.ignore();

        Solution obj;
        int ans = obj.maxOnes(arr, m);
        cout << ans << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends
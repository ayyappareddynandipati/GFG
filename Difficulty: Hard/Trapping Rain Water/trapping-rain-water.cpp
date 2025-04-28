//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int l=0,r=arr.size()-1;
        int leftmax=0,rightmax=0,total=0;
        while(l<r){
            if(arr[l]<=arr[r]){
                if(leftmax>arr[l]){
                    total+=leftmax-arr[l];
                }else{
                    leftmax=arr[l];
                }
                l++;
            }else{
                if(rightmax>arr[r]){
                    total+=rightmax-arr[r];
                }else{
                    rightmax=arr[r];
                }
                r--;
            }
        }
        return total;        
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

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
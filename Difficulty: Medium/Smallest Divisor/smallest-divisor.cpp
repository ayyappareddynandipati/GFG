//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int smallDiv(vector<int> arr,int div){
        int sum=0;
        for(int num : arr){
            sum+=ceil((double)num/div);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& arr, int k) {
        // Write your code here.
        int low=1,high=*max_element(arr.begin(),arr.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            int sd = smallDiv(arr,mid);
            if(sd>k){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return low;
    }
};



//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.smallestDivisor(arr, d);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends
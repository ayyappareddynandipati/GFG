//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int noOfDays(int arr[],int capability,int n){
        int load=0,days=1;
        for(int i=0;i<n;i++){
            if(load+arr[i]>capability){
                days++;
                load=arr[i];
            }else{
                load+=arr[i];
            }
        }
        return days;
    }
    int leastWeightCapacity(int arr[], int n, int d) {
        // code here
        int low=*max_element(arr,arr+n);
        int high=accumulate(arr,arr+n,0);
        while(low<high){
            int mid=low+(high-low)/2;
            int noofdays = noOfDays(arr,mid,n);
            if(noofdays<=d){
                high=mid;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, D;
        cin >> N;

        int arr[N];
        for (int i = 0; i < N; i++)
            cin >> arr[i];
        cin >> D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr, N, D) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends
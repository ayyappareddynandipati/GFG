//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countPartitions(int arr[],int maxSum,int N){
        long long subarraysum=0;
        int partitions=1;
        for(int i=0;i<N;i++){
            if(subarraysum+arr[i]>maxSum){
                partitions++;
                subarraysum=arr[i];
            }else{
                subarraysum+=arr[i];
            }
        }
        return partitions;
    }
    int splitArray(int arr[] ,int N, int K) {
        // code here
        int low=*max_element(arr,arr+N);
        int high=accumulate(arr,arr+N,0);
        while(low<high){
            int mid=low+(high-low)/2;
            int partitions = countPartitions(arr,mid,N);
            if(partitions<=K){
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
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int toyCount(int N, int K, vector<int> arr) {
        // code here
        sort(arr.begin(),arr.end());
        int i=0;
        while(i<N && arr[i]<=K){
            K-=arr[i];
            i++;
        }
        return i;
    }
};
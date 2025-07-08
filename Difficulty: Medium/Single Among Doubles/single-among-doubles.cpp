// User function template for C++
class Solution {
  public:
    int search(int n, int arr[]) {
        // code
        int res=0;
        for(int i=0;i<n;i++){
            res^=arr[i];
        }
        return res;
    }
};
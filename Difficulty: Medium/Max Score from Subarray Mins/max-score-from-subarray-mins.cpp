class Solution {
  public:
    int maxSum(vector<int> &arr) {
        // code here
        int maxi=INT_MIN;
        for(int i=0;i<arr.size()-1;i++){
            maxi=max(maxi,arr[i]+arr[i+1]);
        }
        return maxi;
    }
};
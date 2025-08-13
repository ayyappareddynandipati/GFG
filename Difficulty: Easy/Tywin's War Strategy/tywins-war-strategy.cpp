class Solution {
  public:
    int minSoldiers(vector<int>& arr, int k) {
        // code here
        for(int i=0;i<arr.size();i++){
            arr[i] = (k-arr[i]%k)%k;
        }
        sort(arr.begin(), arr.end());
        return accumulate(arr.begin(), arr.end()-arr.size()/2,0);
    }
};
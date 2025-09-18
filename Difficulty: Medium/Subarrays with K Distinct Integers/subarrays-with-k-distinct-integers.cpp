class Solution {
  public:
    int kMost(vector<int> &arr, int k){
        int cnt=0,l=0,r=0;
        unordered_map<int,int>mpp;
        while(r<arr.size()){
            mpp[arr[r]]++;
            while(mpp.size()>k){
                mpp[arr[l]]--;
                if(mpp[arr[l]]==0){
                    mpp.erase(arr[l]);
                }
                l++;
            }
            cnt+=(r-l+1);
            r++;
        }
        return cnt;
    }
    int exactlyK(vector<int> &arr, int k) {
        // code here
        return kMost(arr,k) - kMost(arr,k-1);
    }
};
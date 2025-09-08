class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // code here
        int maxi=0,l=0,r=0;
        unordered_map<int,int>mpp;
        while(r<arr.size()){
            mpp[arr[r]]++;
            while(mpp.size()>2){
                mpp[arr[l]]--;
                if(mpp[arr[l]]==0){
                    mpp.erase(arr[l]);
                }
                l++;
            }
            maxi=max(maxi,r-l+1);
            r++;
        }
        return maxi;
    }
};
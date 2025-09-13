class Solution {
  public:
    int kSum(vector<int>& arr,int k){
        int sum=0,cnt=0,l=0,r=0;
        while(r<arr.size()){
            sum+=arr[r];
            while(sum>k){
                sum-=arr[l];
                l++;
            }
            cnt+=(r-l+1);
            r++;
        }
        return cnt;
    }
    int numberOfSubarrays(vector<int>& arr, int target) {
        // Your code goes here.
        return kSum(arr,target) - kSum(arr,target-1);
    }
};
class Solution {
  public:
    int kCountOdd(vector<int>& nums,int k){
        int cnt=0,oddcnt=0,l=0,r=0;
        while(r<nums.size()){
            if(nums[r]&1){
                oddcnt++;
            }
            while(oddcnt>k && l<=r){
                if(nums[l]%2==1){
                    oddcnt--;
                }
                l++;
            }
            cnt+=(r-l+1);
            r++;
        }
        return cnt;
    }
    int countSubarrays(vector<int>& arr, int k) {
        // code here
        return kCountOdd(arr,k) - kCountOdd(arr,k-1);
    }
};
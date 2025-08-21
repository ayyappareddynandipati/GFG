class Solution {
  public:
    bool isPossible(vector<int>& arr, int k , int mid){
        int cnt=1;
        int lastvisit=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]-lastvisit>=mid){
                cnt++;
                lastvisit=arr[i];
            }if(cnt==k){
                return true;
            }
        }
        return false;
    }
    int maxMinDiff(vector<int>& arr, int k) {
        // code here
        sort(arr.begin(),arr.end());
        int low=0;
        int high=arr.back()-arr.front();
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(isPossible(arr,k,mid)){
                ans=mid;
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return ans;
    }
};

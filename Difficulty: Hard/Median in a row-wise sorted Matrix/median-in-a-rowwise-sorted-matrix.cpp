class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        // code here
        int n=mat.size(),m=mat[0].size();
        int low=INT_MAX,high=INT_MIN;
        for(int i=0;i<n;i++){
            low=min(low,mat[i][0]);
            high=max(high,mat[i][m-1]);
        }
        int desiredval=(n*m+1)/2;
        while(low<high){
            int mid=low+(high-low)/2;
            int cnt=0 ;// count elements <= mid
            for(int i=0;i<n;i++){
                cnt+=upper_bound(mat[i].begin(),mat[i].end(),mid)-mat[i].begin();
            }
            if(cnt<desiredval){
                low=mid+1;
            }else{
                high=mid;
            }
        }
        return low;
    }
};

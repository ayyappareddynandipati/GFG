class Solution {
  public:
    int balanceSums(vector<vector<int>>& mat) {
        // code here
        int maxisum=0,n=mat.size(),res=0;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                sum+=mat[i][j];
            }
            maxisum=max(maxisum,sum);
        }
        for(int j=0;j<n;j++){
            int sum=0;
            for(int i=0;i<n;i++){
                sum+=mat[i][j];
            }
            maxisum=max(maxisum,sum);
        }
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                sum+=mat[i][j];
            }
            res+=(maxisum-sum);
        }
        return res;
    }
};
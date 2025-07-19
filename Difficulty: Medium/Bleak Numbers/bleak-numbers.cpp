class Solution {
  public:
    int is_bleak(int n) {
        // Code here.
        for(int i=max(0,n-64);i<n;i++){
            if(i+__builtin_popcount(i)==n){
                return 0;
            }
        }
        return 1;
    }
};

class Solution {
  public:
    int gameOfXor(int N, int A[]) {
        // code here
        int res=0;
        for(int i=0;i<N;i++){
            int freq = (i+1)*(N-i);
            if(freq&1){
                res^=A[i];
            }
        }
        return res;
    }
};

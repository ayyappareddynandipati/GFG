// User function Template for C++

class Solution {
  public:
    vector<int> changeBits(int N) {
        // code here
        int orig=N,res=0,place=0;
        while(N>0){
            res+=(1<<place++);
            N>>=1;
        }
        return {res-orig,res};
    }
};
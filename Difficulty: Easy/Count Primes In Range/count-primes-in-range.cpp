// User function Template for C++

class Solution {
  public:
    int countPrimes(int L, int R) {
        // code here
        int cnt=0;
        vector<bool>isPrime(R+1,true);
        isPrime[0]=false;
        isPrime[1]=false;
        for(int i=2;i*i<=R;i++){
            if(isPrime[i]){
                for(int j=i*i;j<=R;j+=i){
                    isPrime[j]=false;
                }
            }
        }
        for(int i=max(L,2);i<=R;i++){
            if(isPrime[i]) cnt++;
        }
        return cnt;
    }
};
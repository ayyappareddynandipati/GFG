// User function Template for C++

class Solution {
  public:
    vector<int> primeRange(int M, int N) {
        // code here
        vector<int>res;
        vector<bool>isPrime(N+1,true);
        isPrime[0]=false;
        isPrime[1]=false;
        for(int i=2;i*i<=N;i++){
            if(isPrime[i]){
                for(int j=i*i;j<=N;j+=i){
                    isPrime[j]=false;
                }
            }
        }
        for(int i=max(M,2);i<=N;i++){
            if(isPrime[i]){
                res.push_back(i);
            }
        }
        return res;
    }
};
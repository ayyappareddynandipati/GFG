class Solution {
  public:
    int largestPrimeFactor(int n) {
        // code here
        int maxi=INT_MIN;
        while((n&1)==0){
            maxi=max(maxi,2);
            n>>=1;
        }
        for(int i=3;i*i<=n;i+=2){
            while(n%i==0){
                maxi=max(maxi,i);
                n/=i;
            }
        }
        return max(maxi,n);
    }
};
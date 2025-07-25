class Solution {
  public:
    vector<int> primeFac(int n) {
        // code here
        vector<int>res;
        if(n%2==0){
            res.push_back(2);
            while((n&1)==0) n>>=1;
        }
        for(int i=3;i*i<=n;i+=2){
            if(n%i==0){
                res.push_back(i);
                while(n%i==0) n/=i;
            }
        }
        if(n>2) res.push_back(n);
        return res;
    }
};
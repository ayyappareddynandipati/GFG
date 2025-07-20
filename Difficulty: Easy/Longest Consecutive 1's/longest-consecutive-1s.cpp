class Solution {
  public:
    int maxConsecutiveOnes(int n) {
        // code here
        int maxi=INT_MIN,cnt=0;
        while(n!=0){
            if(n & 1){
                cnt++;
            }else{
                maxi=max(maxi,cnt);
                cnt=0;
            }
            n>>=1;
        }
        return max(maxi,cnt);
    }
};

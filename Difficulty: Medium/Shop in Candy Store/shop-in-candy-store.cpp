class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        // Code here
        sort(prices.begin(),prices.end());
        int mini=0,maxi=0;
        int l=0,r=prices.size()-1;
        while(l<=r){
            mini+=prices[l];
            l++;
            r-=k;
        }
        l=0,r=prices.size()-1;
        while(l<=r){
            maxi+=prices[r];
            r--;
            l+=k;
        }
        return {mini,maxi};
    }
};
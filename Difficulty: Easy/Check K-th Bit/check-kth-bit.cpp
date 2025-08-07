class Solution {
  public:
    bool checkKthBit(int n, int k) {
        //  code here
        //return (n & (1 << k)) != 0;
        return ((n>>k)&1)!=0;
    }
};
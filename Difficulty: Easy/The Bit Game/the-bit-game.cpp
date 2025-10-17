class Solution {
  public:
    int swapBitGame(long long N) {
        // code here
        int a = __builtin_popcountll(N);
        return (a & 1) ? 1 : 2; 
    }
};
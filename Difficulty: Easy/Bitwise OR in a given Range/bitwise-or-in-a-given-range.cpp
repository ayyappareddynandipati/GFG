// User function template for C++
class Solution {
  public:

    long long int findBitwiseOR(long long int L, long long int R) {
        // complete the function here
        while (L < R) {
            L |= (L + 1);
        }
        return L;
    }
};
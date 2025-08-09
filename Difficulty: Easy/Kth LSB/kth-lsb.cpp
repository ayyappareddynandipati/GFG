// User function template for C++
class Solution {
  public:

    int KthLSB(long long int n, int k) {
        // complete the function here
        return (n >> --k) & 1;
    }
};
// User function Template for C++
class Solution {
  public:
    long long int leftShops(long long int i, long long int L) {
        // code here
        return (1 << L) - i;
    }
};
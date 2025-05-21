// User function Template for C++

class Solution {
  public:
    
    const int MOD = 1e9 + 7;
    
    // Function to compute Euler's Totient function
    int phi(int n) {
        int result = n;
        for (int p = 2; p * p <= n; ++p) {
            if (n % p == 0) {
                while (n % p == 0)
                    n /= p;
                result -= result / p;
            }
        }
        if (n > 1)
            result -= result / n;
        return result;
    }
    long long int sumOfGCDofPairs(int N) {
        // complete the function here
        long long int sum = 0;
        for (int d = 1; d * d <= N; ++d) {
            if (N % d == 0) {
                int d1 = d;
                int d2 = N / d;
    
                sum = (sum + 1LL * d1 * phi(N / d1)) % MOD;
    
                if (d1 != d2) // To avoid counting square root twice
                    sum = (sum + 1LL * d2 * phi(N / d2)) % MOD;
            }
        }
        return sum;
    }
};
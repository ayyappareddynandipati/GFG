
class Solution {
  public:
    string is_power_of_eight(long long int n) {
        // Code here.
        // Must be greater than 0 and a power of 2
        if (n <= 0 || (n & (n - 1)) != 0)
            return "No";
        
        // Count position of the only set bit (zero-based)
        int position = 0;
        while ((n >>= 1) > 0) {
            position++;
        }

        // If the position is divisible by 3, then it's a power of 8
        return (position % 3 == 0) ? "Yes" : "No";

    }
};

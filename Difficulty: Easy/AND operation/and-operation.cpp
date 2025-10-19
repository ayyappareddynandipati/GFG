
class Solution {
  public:
    int find_and(int l, int r) {
        // Code here.
        int shift = 0;
        while (l < r) {
            l >>= 1;
            r >>= 1;
            shift++;
        }
        return l << shift;
    }
};

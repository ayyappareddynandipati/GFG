class Solution {
  public:
    int DivisibleByEight(string s) {
        int n = s.size();
        
        // take last up to 3 digits
        int val = 0;
        if (n >= 3) {
            val = (s[n-3]-'0')*100 + (s[n-2]-'0')*10 + (s[n-1]-'0');
        } else {
            for (int i=0; i<n; i++) {
                val = val*10 + (s[i]-'0');
            }
        }
        
        return (val % 8 == 0) ? 1 : -1;
    }
};

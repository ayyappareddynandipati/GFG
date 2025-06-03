class Solution {
  public:
    int atMostKDistinct(string& s, int k) {
        int l = 0, res = 0;
        unordered_map<char, int> freq;

        for (int r = 0; r < s.size(); r++) {
            freq[s[r]]++;

            while (freq.size() > k) {
                freq[s[l]]--;
                if (freq[s[l]] == 0)
                    freq.erase(s[l]);
                l++;
            }

            res += (r - l + 1);
        }

        return res;
    }
    
    int countSubstr(string& s, int k) {
        // code here.
        return atMostKDistinct(s, k) - atMostKDistinct(s, k - 1);
    }
};
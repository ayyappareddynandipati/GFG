class Solution {
  public:
    string caseSort(string& s) {
        // code here
        int n = s.length();
        
        int lower[26] = {0}, upper[26] = {0};
        
        // Storing frequency of characters  
        for (char ch : s) {
            if (islower(ch)) {
                lower[ch - 'a']++;
            } else {
                upper[ch - 'A']++;
            }
        }
    
        string result = s;
        int l = 0, u = 0;
    
        // Placing sorted characters in original positions  
        for (int i = 0; i < n; i++) {
            if (islower(s[i])) {
                while (lower[l] == 0) {
                    l++;
                }
                result[i] = 'a' + l;
                lower[l]--;
            } else {
                while (upper[u] == 0) {
                    u++;
                }
                result[i] = 'A' + u;
                upper[u]--;
            }
        }
    
        return result;
    }
};
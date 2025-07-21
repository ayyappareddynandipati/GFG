class Solution {
  public:
    string reverseWords(string &s) {
        // code here
        stringstream ss(s);
        string word, result;
    
        while (ss >> word) {
             reverse(word.begin(), word.end());
            result += word + " ";
        }
    
        // Remove the trailing space
        if (!result.empty()) {
            result.pop_back();
        }
    
        return result;
    }
};
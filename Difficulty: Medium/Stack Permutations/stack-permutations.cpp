class Solution {
  public:
    bool checkPerm(vector<int>& a, vector<int>& b) {
        // code here
        stack<int> st;
        int j = 0;
        
        for (int i = 0; i < a.size(); i++) {
            st.push(a[i]);
    
            while (!st.empty() && st.top() == b[j]) {
                st.pop();
                j++;
            }
        }
    
        return st.empty() ? 1 : 0;
    }
};
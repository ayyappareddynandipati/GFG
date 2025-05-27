// User function Template for C++

class Solution {
  public:
    void clonestack(stack<int> st, stack<int>& cloned) {
        // code here
        if (st.empty())
            return;
    
        int temp = st.top();
        st.pop();
    
        clonestack(st, cloned);
        
        cloned.push(temp);
    }
};
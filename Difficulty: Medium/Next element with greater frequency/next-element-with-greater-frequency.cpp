class Solution {
  public:
    vector<int> print_next_greater_freq(int arr[], int n) {
        // code here
        unordered_map<int, int> freq;
        vector<int> result(n, -1);
        stack<int> st;
    
        // Step 1: Count frequencies
        for (int i = 0; i < n; i++) {
            freq[arr[i]]++;
        }
    
        // Step 2: Traverse from right to left
        for (int i = n - 1; i >= 0; i--) {
            // Remove elements from stack with frequency <= current element's frequency
            while (!st.empty() && freq[arr[st.top()]] <= freq[arr[i]]) {
                st.pop();
            }
    
            // If stack is not empty, top is the answer
            if (!st.empty()) {
                result[i] = arr[st.top()];
            }
    
            // Push current index onto stack
            st.push(i);
        }
    
        return result;
    }
};

class Solution {
public:
    int celebrity(vector<vector<int>>& mat) {
        int n = mat.size();
        int top = 0, down = n - 1;

        // Step 1: Find candidate
        while (top < down) {
            if (mat[top][down]) {
                // top knows down → top can't be celebrity
                top++;
            } else {
                // top doesn't know down → down can't be celebrity
                down--;
            }
        }

        int candidate = top;

        // Step 2: Verify candidate
        for (int i = 0; i < n; i++) {
            if (i == candidate) continue; // skip self
            if (mat[candidate][i] == 1 || mat[i][candidate] == 0) {
                return -1;
            }
        }
        return candidate;
    }
};

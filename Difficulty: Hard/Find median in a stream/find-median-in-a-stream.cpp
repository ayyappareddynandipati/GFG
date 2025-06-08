class Solution {
  public:
    vector<double> getMedian(vector<int> &nums) {
        // code here
        priority_queue<int> left; // max-heap
        priority_queue<int, vector<int>, greater<int>> right; // min-heap
        vector<double> result;
    
        for (int num : nums) {
            if (left.empty() || num <= left.top()) {
                left.push(num);
            } else {
                right.push(num);
            }
    
            // Balance the heaps
            if (left.size() > right.size() + 1) {
                right.push(left.top());
                left.pop();
            } else if (right.size() > left.size()) {
                left.push(right.top());
                right.pop();
            }
    
            // Compute median
            if (left.size() == right.size()) {
                result.push_back((left.top() + right.top()) / 2.0);
            } else {
                result.push_back(left.top());
            }
        }
    
        return result;
    }
};

class Solution {
  public:
    vector<vector<int>> kSmallestPair(vector<int> &arr1, vector<int> &arr2, int k) {
        // code here
        vector<vector<int>> ans;
    
        // Min-heap to keep track of current smallest sum and indices
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        set<vector<int>> my_set;
    
        // Push initial pair (arr1[0] + arr2[0]) with indices (0,0)
        pq.push({arr1[0] + arr2[0], 0, 0});
        my_set.insert({0, 0});
    
        int flag = 1;
        for (int count = 0; count < k && flag; count++) {
            vector<int> temp = pq.top();
            pq.pop();
    
            int i = temp[1];
            int j = temp[2];
    
            // Add the current smallest pair to the answer
            ans.push_back({arr1[i], arr2[j]});
    
            flag = 0;
            // Push next element in arr1 (if not already used)
            if (i + 1 < arr1.size()) {
                vector<int> temp1 = {i + 1, j};
                if (my_set.find(temp1) == my_set.end()) {
                    pq.push({arr1[i + 1] + arr2[j], i + 1, j});
                    my_set.insert(temp1);
                }
                flag = 1;
            }
    
            // Push next element in arr2 (if not already used)
            if (j + 1 < arr2.size()) {
                vector<int> temp1 = {i, j + 1};
                if (my_set.find(temp1) == my_set.end()) {
                    pq.push({arr1[i] + arr2[j + 1], i, j + 1});
                    my_set.insert(temp1);
                }
                flag = 1;
            }
        }
    
        return ans;
    }
};

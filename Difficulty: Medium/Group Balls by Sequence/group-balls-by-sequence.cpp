class Solution {
  public:
    bool validgroup(vector<int> &arr, int k) {
        // code here
         int n = arr.size();
        map<int, int> freqMap;
    
        // Store the frequency of each value 
        for (int val : arr) {
            freqMap[val]++;
        }
    
        // Starting from minimum value, try to form consecutive groups
        for (auto p : freqMap) {
            int val = p.first;
            int freq = p.second;
    
            // Skip if all cards of this value are already used
            if (freq == 0) continue;
    
            // Try to form a group of 'k' starting from 'val'
            for (int i = 1; i < k; i++) {
                int nextVal = val + i;
    
                // Check if there are enough cards for the next value
                if (freqMap[nextVal] < freq) {
                    return false;
                }
    
                // Deduct the used cards
                freqMap[nextVal] -= freq;
            }
        }
    
        return true;
    }
};
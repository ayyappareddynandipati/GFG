// User function Template for C++

class Solution {
  public:
    int findSingle(vector<int> &arr) {
        // code here
        int single=0;
        for(int n : arr) single^=n;
        return single;
    }
};
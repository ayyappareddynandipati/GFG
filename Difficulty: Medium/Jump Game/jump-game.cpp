// User function Template for C++

class Solution {
  public:
    // Function to check if we can reach the last index from 0th index.
    bool canReach(vector<int> &arr) {
        // code here
        int n=arr.size(),maxi=0;
        for(int i=0;i<n;i++){
            if(i>maxi) return false;
            maxi=max(maxi,i+arr[i]);
        }
        return true;
    }
};
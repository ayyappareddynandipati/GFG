// User function Template for C++

//Back-end complete function Template for C++

class Solution {
  public:
    long long solve(vector<int>& bt) {
        // code here
        sort(bt.begin(),bt.end());
        long long res=0,cur=0;
        for(int i=0;i<bt.size();i++){
            res+=cur;
            cur+=bt[i];
        }
        return res/bt.size();
    }
};
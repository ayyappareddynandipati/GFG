class Solution {
  public:
    int getMin(int N) {
        // code here
        vector<int>res;
        vector<int> inr = {1, 2, 5, 10,};
        int n=inr.size();
        for(int i=n-1;i>=0;i--){
            while(N>=inr[i]){
                N-=inr[i];
                res.push_back(inr[i]);
            }
        }
        return res.size();
    }
};
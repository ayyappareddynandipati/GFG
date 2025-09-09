class Solution {
  public:
    int assignHole(vector<int>& mices, vector<int>& holes) {
        // code here
        int res=INT_MIN;
        sort(mices.begin(),mices.end());
        sort(holes.begin(),holes.end());
        for(int i=0;i<mices.size();i++){
            res=max(res,abs(mices[i]-holes[i]));
        }
        return res;
    }
};
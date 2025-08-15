class Solution {
  public:
    vector<vector<int>> insertInterval(vector<vector<int>> &intervals,vector<int> &newInterval) {
        // code here
        vector<vector<int>> res;
        int n=intervals.size(),i=0;
        while(i<n && intervals[i][1]<newInterval[0]){
            res.push_back(intervals[i]);
            i++;
        }
        while(i<n && intervals[i][0]<=newInterval[1]){
            newInterval = {min(intervals[i][0],newInterval[0]),max(intervals[i][1],newInterval[1])};
            i++;
        }
        res.push_back(newInterval);
         while(i<n){
            res.push_back(intervals[i]);
            i++;
        }
        return res;
    }
};
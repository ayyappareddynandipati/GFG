class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(vector<int>& start, vector<int>& end) {
        // Your code here
        int n = start.size();
        vector<vector<int>> meetings(n);
        for(int i=0;i<n;i++){
            meetings[i]={start[i],end[i]};
        }
        sort(meetings.begin(), meetings.end(), [](auto &a, auto &b){
            return a[1] < b[1]; // sort by end time
        });

        
        int cnt=1,lastmeeting=meetings[0][1];
        for(int i=1;i<n;i++){
            if(meetings[i][0]>lastmeeting){
                cnt++;
                lastmeeting=meetings[i][1];
            }
        }
        return cnt;
    }
};
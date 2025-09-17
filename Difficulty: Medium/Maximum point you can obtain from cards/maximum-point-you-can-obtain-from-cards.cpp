class Solution {
  public:
    int maxScore(vector<int>& cardPoints, int k) {
        // code here.
        int maxsum=0,lsum=0,rsum=0;
        for(int i=0;i<k;i++){
            lsum+=cardPoints[i];
        }
        maxsum=lsum;
        for(int i=0;i<k;i++){
            lsum-=cardPoints[k-i-1];
            rsum+=cardPoints[cardPoints.size()-i-1];
            maxsum=max(maxsum,lsum+rsum);
        }
        return maxsum;
    }
};

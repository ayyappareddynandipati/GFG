class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        // code here
        unordered_map<int,int>mpp;
        int mini = INT_MAX;
        for(int i=0;i<arr.size();i++){
            if(mpp.find(arr[i])!=mpp.end()){
                mini = min(mini,mpp[arr[i]]);
            }else{
                mpp[arr[i]] = i+1;
            }
        }
        return (mini == INT_MAX) ? -1 : mini;
    }
};
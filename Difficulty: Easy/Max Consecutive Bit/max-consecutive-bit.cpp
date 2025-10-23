class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int cnt=1,maxCount=0;
        for(int i=1;i<arr.size();i++){
            if(arr[i]==arr[i-1]){
                cnt++;
            }else{
                maxCount=max(maxCount,cnt);
                cnt=1;
            }
        }
        return max(maxCount,cnt);
    }
};
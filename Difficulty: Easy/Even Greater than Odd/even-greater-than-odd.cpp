class Solution {
  public:
    vector<int> rearrangeArray(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> ans = arr;
        for(int i=1;i<n;i++){
            if((i+1)%2==0){
                if(ans[i]<ans[i-1]){
                    swap(ans[i],ans[i-1]);
                }
            }
            else{
                if(ans[i]>ans[i-1]){
                    swap(ans[i],ans[i-1]);
                }
            }
        }
        return ans;
    }
};
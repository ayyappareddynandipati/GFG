class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        // code here
        deque<int>dq;
        vector<int>res;
        int left=0,right=0;
        while(right<arr.size()){
            while(!dq.empty() && arr[dq.back()]<arr[right]){
                dq.pop_back();
            }
            dq.push_back(right);
            if(left>dq.front()){
                dq.pop_front();
            }
            if(right+1>=k){
                res.push_back(arr[dq.front()]);
                left+=1;
            }
            right++;
        }
        return res;
    }
};
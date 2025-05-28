class Solution {
  public:
    void leftSmaller(vector<int> &arr,vector<int> &ls){
        stack<int> st;
        for(auto it : arr){
            while(!st.empty() && st.top()>=it) st.pop();
            int ns = st.empty()?0:st.top();
            ls.push_back(ns);
            st.push(it);
        }
    }
    void rightSmaller(vector<int> &arr,vector<int> &rs){
        stack<int> st;
        for(int i=arr.size()-1;i>=0;i--){
            while(!st.empty() && st.top()>=arr[i]) st.pop();
            int ns = st.empty()?0:st.top();
            rs.insert(rs.begin(), ns);
            st.push(arr[i]);
        }
    }
    int findMaxDiff(vector<int> &arr) {
        // code here
        vector<int> ls;
        vector<int> rs;
        leftSmaller(arr,ls);
        rightSmaller(arr,rs);
        int n = arr.size();
        int ans=0;
        for(int i=0;i<n;i++){
           ans = max(abs(ls[i]-rs[i]),ans);
        }
        return ans;
        
    }
};
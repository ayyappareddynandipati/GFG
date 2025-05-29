// User function Template for C++

class Solution {
  public:
    int maxValue(vector<int>& arr) {
        // code here
        int mx1=0,mx2=0,mn1=0,mn2=0,ans=0;
        for(int i=1;i<arr.size();i++)
        {
            if(mx1+arr[mx1]<=i+arr[i])
            mx1=i;
            if(mn1+arr[mn1]>i+arr[i])
            mn1=i;
            if(mx2-arr[mx2]<=i-arr[i])
            mx2=i;
            if(mn2-arr[mn2]>i-arr[i])
            mn2=i;
        }
        ans=max(ans,abs(mx1-mn1)+abs(arr[mx1]-arr[mn1]));
        ans=max(ans,abs(mx2-mn2)+abs(arr[mx2]-arr[mn2]));
        return ans;
    }
};
class Solution {
  public:
    // Function to find triplets with zero sum.
    bool findTriplets(vector<int> &arr) {
        // code here
        int n = arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-2;i++)
        {
            int ans1=arr[i];
            
            int j=i+1,k=n-1;
            while(j<k)
            {
                if(ans1+arr[j]+arr[k]==0)
                return true;
                else if(ans1+arr[j]+arr[k]>0)
                k--;
                else
                j++;
                
            }
        }
        return false;
    }
};
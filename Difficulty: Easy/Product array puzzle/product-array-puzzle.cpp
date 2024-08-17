//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {

        // code here
        vector<long long int>left(nums.size(), 1);
        vector<long long int>right(nums.size(), 1);
        vector<long long int>res(nums.size(), 1);
        long long int pro=1;
        for(long long int i=0;i<nums.size();i++)
        {
            left[i]=pro;
            pro*=nums[i];
        }
        pro=1;
        for(int j=nums.size()-1;j>=0;j--)
        {
            right[j]=pro;
            pro*=nums[j];
        }
        for(long long int k=0;k<nums.size();k++)
        {
            res[k]=left[k]*right[k];
        }
        return res;
        
        
    }
};


//{ Driver Code Starts.
int main() {
    int t; // number of test cases
    cin >> t;
    while (t--) {
        int n; // size of the array
        cin >> n;
        vector<long long int> arr(n), vec(n);

        for (int i = 0; i < n; i++) // input the array
        {
            cin >> arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr); // function call

        for (int i = 0; i < n; i++) // print the output
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
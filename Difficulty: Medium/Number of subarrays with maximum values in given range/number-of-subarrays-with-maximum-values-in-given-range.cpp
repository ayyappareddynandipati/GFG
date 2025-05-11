//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends



class Solution {
  public:
    long countLessThanEqual(int a[], int n, int X) {
        long count = 0;
        long length = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] <= X) {
                length++;
                count += length;
            } else {
                length = 0;
            }
        }
        return count;
    }

    long countSubarrays(int a[], int n, int L, int R) {
        // Complete the function
        return countLessThanEqual(a, n, R) - countLessThanEqual(a, n, L - 1);
    }
};


//{ Driver Code Starts.
// driver program
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        
        int n ,l,r;
        cin >> n>>l>>r;
        int a[n];
        for(int i=0;i<n;i++)
        cin >> a[i];
        Solution ob;
    	cout << ob.countSubarrays(a, n, l, r)<<endl;
    
cout << "~" << "\n";
}
	return 0;
}

// } Driver Code Ends
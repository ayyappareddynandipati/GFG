//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int substringsWithAtLeastKDistinct(string s, int n, int k)
    {
        int l=0,res=0;
        unordered_map<char,int>mpp;
        for(int r=0;r<n;r++){
            mpp[s[r]]++;
            while(mpp.size()>=k){
                mpp[s[l]]--;
                if(mpp[s[l]]==0) mpp.erase(s[l]);
                l++;
            }
            res+=(r-l+1);
        }
        return res;
    }
    int countSubstr(string& s, int k) {
        // code here.
    	int n=s.size();
    	return substringsWithAtLeastKDistinct(s, n, k+1)-substringsWithAtLeastKDistinct(s, n, k);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.countSubstr(s, k) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends
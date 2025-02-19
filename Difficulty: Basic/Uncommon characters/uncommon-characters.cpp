//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string uncommonChars(string& s1, string& s2) {
        // code here
        string s;
        string c;
        int n=s1.size();
        int m=s2.size();
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=0;j<m;j++){
                if(s1[i]==s2[j]) cnt++;
            }
            if(cnt==0) s.push_back(s1[i]);
        }
        for(int i=0;i<m;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(s2[i]==s1[j]) cnt++;
            }
            if(cnt==0) s.push_back(s2[i]);
        }
        sort(s.begin(), s.end());
        int k=s.size();
        for(int i=0;i<k;i++){
            if(s[i]!=s[i+1]) c.push_back(s[i]);
        }
        return c;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string A, B;
        cin >> A;
        cin >> B;
        Solution ob;
        cout << ob.uncommonChars(A, B);
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
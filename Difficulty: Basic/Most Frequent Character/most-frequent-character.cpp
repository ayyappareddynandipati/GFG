//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string& s) {
        // Your code here
        map<char,int> mpp;
        for(char c:s){
            mpp[c]++;
        }
        char res='a';
        int maxi=INT_MIN;
        for(auto& n : mpp){
            int val = n.second;
            if(maxi<val){
                maxi=val;
                res=n.first;
            }
            if(maxi==val){
                res = min(res,n.first);
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution obj;
        cout << obj.getMaxOccuringChar(str) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends
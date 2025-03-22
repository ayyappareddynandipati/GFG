//{ Driver Code Starts
// C++ program to check if two strings are isomorphic

#include <bits/stdc++.h>

using namespace std;
#define MAX_CHARS 256


// } Driver Code Ends

class Solution {
  public:
    // Function to check if two strings are isomorphic.
    bool areIsomorphic(string &s1, string &s2) {

        // Your code here
        int n1=s1.size(),n2=s2.size();
        if(n1!=n2) return false;
        unordered_map<char,char>mpp1,mpp2;
        for(int i=0;i<n1;i++){
            auto it1 = mpp1.find(s1[i]);
            if(it1==mpp1.end()){
                mpp1[s1[i]]=s2[i];
            }else if(it1!=mpp1.end()) {
                if(it1->second!=s2[i]){
                    return false;
                }
            }
            auto it2 = mpp2.find(s2[i]);
            if(it2==mpp2.end()){
                mpp2[s2[i]]=s1[i];
            }else if(it2!=mpp2.end()){
                if(it2->second!=s1[i]){
                    return false;
                }
            }
        }
        return true;
    }
};


//{ Driver Code Starts.

// Driver program
int main() {
    int t;
    cin >> t;
    string s1, s2;
    while (t--) {
        cin >> s1;
        cin >> s2;
        Solution obj;
        int r = obj.areIsomorphic(s1, s2);
        if (r) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends
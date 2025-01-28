//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
    void generatePermutations(int index, string &s, set<string>& ans)
    {
        if (index==s.size())
    	{
    		ans.insert(s);
    		return ;
    	}
    	for(int i=index;i<s.size();i++)
    	{
    		swap(s[i],s[index]);
    		generatePermutations(index+1,s,ans);
    		swap(s[i],s[index]);
    	}
    }
  public:
    vector<string> findPermutation(string &s) {
        // Code here there
        set<string> ans;
        generatePermutations(0, s, ans);
        return vector<string>(ans.begin(),ans.end());
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        vector<string> ans = ob.findPermutation(S);
        sort(ans.begin(), ans.end());
        for (auto i : ans) {
            cout << i << " ";
        }
        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends
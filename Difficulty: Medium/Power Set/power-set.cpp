//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    int n = s.size(),numofsubsequences = 1 << n;
		    vector<string> res;
		   for(int i=0;i<numofsubsequences;i++)
		   {
		       string subsequence = "";
		       for(int j=0;j<n;j++)
		       {
		           if (i & (1 << j))
		           {
		               subsequence+=s[j];
		           }
		       }
		       if(subsequence.size()>0)
		       {
		           res.push_back(subsequence);
		       }
		   }
		   sort(res.begin(),res.end());
		   return res;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends
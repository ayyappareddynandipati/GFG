//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
        vector <int> search(string pattern, string text)
        {
            //code here.
            vector<int>res;
            int n1=pattern.size(),n2=text.size();
            for(int i=0;i<=n2-n1;i++){
                if(text.substr(i,n1)==pattern){
                    res.push_back(i+1);
                }
            }
            return res;
        }
     
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    
cout << "~" << "\n";
}
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
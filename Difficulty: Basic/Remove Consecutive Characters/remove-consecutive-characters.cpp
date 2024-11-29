//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
    string removeConsecutiveCharacter(string s)
    {
        // code here.
        string s1="";
        for(int i=0;i<s.size();i++)
        {
            if(i == 0 || s[i] != s[i - 1])
            {
               s1+=s[i]; 
            }
        }
        return s1;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    
cout << "~" << "\n";
}
} 




// } Driver Code Ends
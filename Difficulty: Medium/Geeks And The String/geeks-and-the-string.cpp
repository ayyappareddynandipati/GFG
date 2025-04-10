//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string removePair(string s) {
        // code here
        string res="";
        for(char ch : s){
            if(!res.empty() && res.back()==ch){
                res.pop_back();
            }else{
                res.push_back(ch);
            }
        }
        return res.empty() ? "-1" : res;
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s; 
        cin>>s;
        
        Solution obj;
        string res = obj.removePair(s);
        
        cout<<res<<endl;
        
    
cout << "~" << "\n";
}
}

// } Driver Code Ends
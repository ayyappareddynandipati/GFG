//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;
 
string to_upper(string in);
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		cout << to_upper(str)<<endl;
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends



string to_upper(string str){
    //code
    string res = "";
    int n = str.size();
    for(auto c : str)
    {
        if (c >= 97 && c <= 122)
        {
            res += c-32;
        }
    }
    return res;
    
}
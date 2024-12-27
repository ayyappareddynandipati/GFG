//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
void subsets(vector<int>& num,int& n,vector<vector<int>>& res)
{ 
    int numofsub = 1 << n;
    for(int i=0;i<numofsub;i++)
    {
        vector<int> res1;
        for(int j=0;j<n;j++)
        {
            if (i & (1 << j))
            {
                res1.push_back(num[j]);
            }
        }
        res.push_back(res1);
    }
}
    public:
    //Function to find all possible unique subsets.
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        // code here 
        vector<vector<int>> res;
        sort(arr.begin(),arr.end());
        subsets(arr,n,res); 
        sort(res.begin(),res.end());
        auto it =  unique(res.begin(),res.end());
        res.erase(it,res.end());
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    
cout << "~" << "\n";
}
}   



// } Driver Code Ends
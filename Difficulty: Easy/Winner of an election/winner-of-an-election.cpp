//{ Driver Code Starts
#include <algorithm>
#include <bits/stdc++.h>
#include <cstdlib>
#include <iostream>
#include <map>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return the name of candidate that received maximum votes.
    vector<string> winner(vector<string> &arr) {
        // code here
        vector<string>a;
        int n = arr.size();
        map<string,int>ans;
        for (int i=0;i<n;i++) {
            ans[arr[i]]++;
        }
        string answ = "";
        int temp = 0;
        for (auto& i:ans) {
            if (i.second>temp) {
                temp = i.second;
                answ = i.first;
            }
        }
        a.push_back(answ);
        a.push_back(to_string(temp));
        return a;
    }
};

//{ Driver Code Starts.

vector<string> inputLine() {
    string str;
    getline(cin, str);
    stringstream ss(str);
    string s;
    vector<string> res;
    while (ss >> s) {
        res.push_back(s);
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {
        vector<string> arr = inputLine();
        Solution obj;
        vector<string> result = obj.winner(arr);

        cout << result[0] << " " << result[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
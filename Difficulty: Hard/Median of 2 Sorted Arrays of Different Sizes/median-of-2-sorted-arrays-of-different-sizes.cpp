//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        // Your code goes here
        a.insert(a.end(),b.begin(),b.end());
        double ans=0;
        sort(a.begin(),a.end());
        int s=0;
        int e=a.size()-1;
        int mid=s+(e-s)/2;
        if(a.size()%2==0){
           ans=(a[mid]+a[mid+1])/2.0;
        }
        else{
            ans=a[mid];
        }
       return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline after reading `t`

    while (t--) {
        // Read the first array
        string line1;
        getline(cin, line1);
        stringstream ss1(line1);

        vector<int> array1;
        int num;
        while (ss1 >> num) {
            array1.push_back(num);
        }

        // Read the second array
        string line2;
        getline(cin, line2);
        stringstream ss2(line2);

        vector<int> array2;
        while (ss2 >> num) {
            array2.push_back(num);
        }

        // Create a Solution object and calculate the median
        Solution ob;
        if (array2.size() == 1 && array2[0] == 0) {
            array2.pop_back();
        }

        double ans = ob.medianOf2(array1, array2);
        if (ans == (int)ans) {
            cout << (int)ans << endl;
        } else {
            cout << ans << endl;
        }

        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends
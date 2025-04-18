//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
public:
    int maxWater(vector<int> &arr) {
        int maxArea = 0;
        int l = 0, r = arr.size() - 1;

        while (l < r) {
            int height = min(arr[l], arr[r]);
            int width = r - l;
            int area = height * width;
            maxArea = max(maxArea, area);

            // Move the pointer at the shorter line
            if (arr[l] < arr[r])
                l++;
            else
                r--;
        }

        return maxArea;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
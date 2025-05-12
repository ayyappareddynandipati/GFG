//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    long long countPairs(vector<int> &arr, vector<int> &brr) {
        // Count of brr elements 0 to 4 (for handling edge cases)
        vector<int> countY(5, 0);
        for (int y : brr) {
            if (y < 5) countY[y]++;
        }

        // Sort brr for binary search
        sort(brr.begin(), brr.end());

        // Helper lambda to count valid y for a given x
        auto countForX = [&](int x) -> long long {
            if (x == 0) return 0;
            if (x == 1) return countY[0];

            // Count of y such that y > x
            int idx = upper_bound(brr.begin(), brr.end(), x) - brr.begin();
            long long total = brr.size() - idx;

            // Add cases where y = 0 or 1
            total += countY[0] + countY[1];

            // Adjust for x == 2 (2^3 < 3^2 and 2^4 < 4^2)
            if (x == 2) total -= (countY[3] + countY[4]);

            // Adjust for x == 3 (3^2 > 2^3)
            if (x == 3) total += countY[2];

            return total;
        };

        long long cnt = 0;
        for (int x : arr) {
            cnt += countForX(x);
        }

        return cnt;
    }
};



//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        vector<int> ex;
        vector<int> a, b;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            ex.push_back(num);
        a = ex;
        getline(cin, input);
        ss.clear();
        ss.str(input);
        int num2;
        while (ss >> num2)
            b.push_back(num2);

        Solution ob;
        cout << ob.countPairs(a, b) << endl;
    }
}
// } Driver Code Ends
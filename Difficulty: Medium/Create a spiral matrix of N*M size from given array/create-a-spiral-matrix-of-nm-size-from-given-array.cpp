//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};

class Matrix {
  public:
    template <class T>
    static void input(vector<vector<T>> &A, int n, int m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d ", &A[i][j]);
            }
        }
    }

    template <class T>
    static void print(vector<vector<T>> &A) {
        for (int i = 0; i < A.size(); i++) {
            for (int j = 0; j < A[i].size(); j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends


class Solution {
  public:
    vector<vector<int>> spiralFill(int n, int m, vector<int> &arr) {
        // code here
        vector<vector<int>>ans(n,vector<int>(m,0));
        int top=0, bottom=n-1,left=0,right=m-1;
        int j=0;
        while(top<=bottom &&left<=right){
            for(int i=left;i<=right;i++){
                ans[top][i]=arr[j++];
            }
            top++;
            for(int i=top;i<=bottom;i++){
                ans[i][right]=arr[j++];
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    ans[bottom][i]=arr[j++];
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    ans[i][left]=arr[j++];
                }
                left++;
            }
        }
        return ans;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        int m;
        scanf("%d", &m);

        vector<int> arr(n * m);
        Array::input(arr, n * m);

        Solution obj;
        vector<vector<int>> res = obj.spiralFill(n, m, arr);

        Matrix::print(res);
    }
}

// } Driver Code Ends
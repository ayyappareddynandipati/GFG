//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void merge(vector<int>& arr, int l, int mid, int r) {
        vector<int> temp; // Temporary array to store merged result
        int left = l;      // Starting index of left half of arr
        int right = mid + 1;   // Starting index of right half of arr
    
        // Storing elements in the temporary array in a sorted manner
        while (left <= mid && right <= r) {
            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left]);
                left++;
            }
            else {
                temp.push_back(arr[right]);
                right++;
            }
        }
    
        // If elements on the left half are still left
        while (left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }
    
        // If elements on the right half are still left
        while (right <= r) {
            temp.push_back(arr[right]);
            right++;
        }
    
        // Transferring all elements from temporary array back to arr
        for (int i = l; i <= r; i++) {
            arr[i] = temp[i - l];
        }
    }

    // MergeSort function to divide the array into subarrays
    void mergeSort(vector<int>& arr, int l, int r) {
        if (l < r) {
            int mid = (l + r) / 2;  // Find the middle index
            mergeSort(arr, l, mid);   // Recursively sort the left half
            mergeSort(arr, mid + 1, r); // Recursively sort the right half
            merge(arr, l, mid, r);   // Merge the two sorted halves
        }
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        obj.mergeSort(arr, 0, arr.size() - 1);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
class Solution {
  public:
    void printArr(int n, int arr[]) {
        // Print array elements
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void setToZero(int n, int arr[]) {
        // Use memset to set arr to zero
        // memset(arr, 0, n * sizeof(int));
        for (int i = 0; i < n; i++) {   
            arr[i] = 0;
        }
    }

    void xor1ToN(int n, int arr[]) {
        // XOR arr[i] with arr[i-1]
        for (int i = 0 ; i < n ; i++) {
            arr[i] = arr[i] ^ i;
        }
    }
};

class Solution {
  public:
    vector<int> findUniquePair(vector<int>& arr) {
        // Complete the function and return the sorted vector.
        int n = arr.size();
        int XOR = arr[0];
        for (int i = 1; i < n; i++) 
            XOR = XOR ^ arr[i];
      
        // Now XOR has XOR of two missing elements. Any set
        // bit in it must be set in one missing and unset in
        // other missing number
     
        // Get a set bit of XOR (We get the rightmost set bit)
        int set_bit_no = XOR & -XOR;
     
        // Now divide elements in two sets by comparing rightmost
        // set bit of XOR with bit at same position in each element.
        int x = 0, y = 0; // Initialize missing numbers
        for (int i = 0; i < n; i++)
        {
            if (arr[i] & set_bit_no)
                x = x ^ arr[i]; /*XOR of first set in arr[] */
            else
                y = y ^ arr[i]; /*XOR of second set in arr[] */
        }
        if(y<x) swap(x,y);
        return {x,y};
    }
};
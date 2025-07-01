class Solution {
  public:
    // Function to calculate the sum of selections
    int Selection(vector<int>& arr) {

        // write code here
        sort(arr.begin(), arr.end());
        int sum = 0;
        int n = arr.size();
        int MODE = 1000000007;
        for(int i=0;i<n;i++){
            sum = (sum%MODE + (arr[i]%MODE * i%MODE)%MODE)%MODE; 
        }
        return sum%MODE;  
    }
};
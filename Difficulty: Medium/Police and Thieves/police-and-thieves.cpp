class Solution {
  public:
    int catchThieves(vector<char> &arr, int k) {
        // Code here
        int n = arr.size();
        
        // Two pointers for policemen and thieves
        int i = 0, j = 0; 
        int count = 0;
    
        while (i < n && j < n) {
            
            // Move i to the next policeman
            while (i < n && arr[i] != 'P') i++;
    
            // Move j to the next thief
            while (j < n && arr[j] != 'T') j++;
    
            // If both policeman and thief exist and are within range k
            if (i < n && j < n && abs(i - j) <= k) {
                
                // Catch the thief
                count++; 
                
                // Move to the next policeman
                i++; 
                
                // Move to the next thief
                j++; 
            } 
            
            // If the thief is too far left, move the thief pointer
            else if (j < n && j < i) {
                j++;
            } 
            
            // If the policeman is too far left, 
            // move the policeman pointer
            else if (i < n && i < j) {
                i++;
            }
        }
        return count;
    }
};
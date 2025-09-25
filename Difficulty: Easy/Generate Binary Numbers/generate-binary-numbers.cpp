class Solution {
  public:
    vector<string> generateBinary(int n) {
        // code here
        vector<string> result;

        for (int num = 1; num <= n; num++) {
            int temp = num;
            string binary = "";
    
            // Convert decimal number to binary
            while (temp > 0) {
                int rem = temp % 2;
    
                if (rem == 0)
                    binary += "0"; 
                else
                    binary += "1"; 
    
                temp = temp / 2;
            }
            
            // reverse to get correct order
            reverse(binary.begin(), binary.end()); 
            
            result.push_back(binary);
        }
    
        return result;
    }
};
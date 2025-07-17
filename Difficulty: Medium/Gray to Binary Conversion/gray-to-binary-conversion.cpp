class Solution {
  public:
    int grayToBinary(int n) {
        // code here
        int binary=n;
        while(n>>=1){
            binary^=n; // binary[0] = gray[0] , binary[i] = binary[i-1] ^ gray[i] for all remaining bits
        }
        return binary;
    }
};


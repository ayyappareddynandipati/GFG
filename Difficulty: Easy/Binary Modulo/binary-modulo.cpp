// User function Template for C++

class Solution {
  public:
    int modulo(string s, int m) {
        // code here
        int number=0;
        for(char c :s){
            number = ((number * 2) + (c - '0'))%m;
        }
        return number;
    }
};
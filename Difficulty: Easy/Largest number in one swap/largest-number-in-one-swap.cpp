class Solution {
  public:
    string largestSwap(string &s) {
        // code here
        char maxdigit = '0';
        int maxidx=-1,l=-1,r=-1;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]>maxdigit){
                maxdigit=s[i];
                maxidx=i;
            }else if(s[i]<maxdigit){
                l=i;
                r=maxidx;
            }
        }
        if(l==-1) return s;
        swap(s[l],s[r]);
        return s;
    }
};
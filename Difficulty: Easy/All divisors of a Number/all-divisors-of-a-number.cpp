class Solution {
  public:
    void print_divisors(int n) {
        // Code here.
        deque<int>dq;
        int sq = sqrt(n);
        while(sq>0)
        {   
            if(n%sq==0){
               dq.push_front(sq);
                if(sq!=n/sq) dq.push_back(n/sq);
            }
            sq--;
        }
        for(auto &x:dq)cout<<x<<" ";
    }
};
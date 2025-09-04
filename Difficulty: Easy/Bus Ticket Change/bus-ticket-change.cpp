class Solution {
  public:
    bool canServe(vector<int> &arr) {
        // code here
        int five=0,ten=0;
        for(int val : arr){
            if(val==5){
                five++;
            }else if(val==10){
                if(five){
                    five--;
                    ten++;
                }else{
                    return false;
                }
            }else{
                if(five && ten){
                    five--;
                    ten--;
                }else if(five>=3){
                    five-=3;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
};
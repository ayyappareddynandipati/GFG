class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        // Code here
        int cnt1=0,cnt2=0,ele1,ele2;
        for(int val : arr){
            if(cnt1==0 && val!=ele2){
                ele1=val;
                cnt1++;
            }else if(cnt2==0 && val!=ele1){
                ele2=val;
                cnt2++;
            }else if(ele1==val){
                cnt1++;
            }else if(ele2==val){
                cnt2++;
            }else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1=0,cnt2=0;
        for(int val : arr){
            if(ele1==val) cnt1++;
            else if(ele2==val) cnt2++;
        }
        int votes = arr.size();
        vector<int> res;
    
        if (cnt1 > votes / 3) res.push_back(ele1);
        if (cnt2 > votes / 3 && ele2 != ele1) res.push_back(ele2);
    
        if (res.size() == 2 && res[0] > res[1]) {
            swap(res[0], res[1]);
        }
    
        return res;
    }
};
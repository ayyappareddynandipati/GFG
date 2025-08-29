class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        vector<int>freq(26,-1);
        int maxi=0,l=0,r=0;
        while(r<s.size()){
            if(freq[s[r] - 'a']!=-1){
                if(freq[s[r]-'a']>=l){
                    l=freq[s[r]-'a']+1;
                }
            }
            maxi=max(maxi,r-l+1);
            freq[s[r]-'a']=r;
            r++;
        }
        return maxi;
    }
};

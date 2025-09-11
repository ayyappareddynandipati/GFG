class Solution {
  public:
    int characterReplacement(string& s, int k) {
        // code here
        int maxilen=0,maxifreq=0,l=0,r=0;
        vector<int>freq(26,0);
        while(r<s.size()){
            freq[s[r] - 'A']++;
            maxifreq=max(maxifreq,freq[s[r] - 'A']);
            if(r-l+1-maxifreq>k){
                freq[s[l] - 'A']--;
                l++;
            }
            maxilen=max(maxilen,r-l+1);
            r++;
        }
        return maxilen;
    }
};
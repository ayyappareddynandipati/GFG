class Solution {
public:
    int maxChildren(vector<int> &greed, vector<int> &cookie) {
        sort(greed.begin(), greed.end());
        sort(cookie.begin(), cookie.end());
        
        int n = greed.size(), m = cookie.size();
        int l = 0, r = 0; // l -> child, r -> cookie
        int count = 0;
        
        while(l < n && r < m){
            if(cookie[r] >= greed[l]){ 
                // assign cookie r to child l
                count++;
                l++;
                r++;
            } else {
                // cookie too small, try next cookie
                r++;
            }
        }
        return count;
    }
};

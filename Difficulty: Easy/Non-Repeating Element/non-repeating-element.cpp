
class Solution {
  public:
    int firstNonRepeating(vector<int>& arr) {
        // Complete the function
        unordered_map<int,int> mp;     
        for(int num: arr) mp[num]++;    
        for(int num : arr)
        {
          if(mp[num]==1)
          return num;
        }
        return 0;
    }
};

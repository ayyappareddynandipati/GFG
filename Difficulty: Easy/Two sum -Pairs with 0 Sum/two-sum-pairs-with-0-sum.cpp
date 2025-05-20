// User function template for C++

class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        // code here
        vector<vector<int>> ans;
        
        sort(arr.begin(), arr.end());
        unordered_map<int, int> map;
        set<vector<int>> st;
        
        for (int i = 0; i < arr.size(); ++i) {
            int comp = 0 - arr[i];
            if (map.find(comp) != map.end())
                st.insert({comp, arr[i]});
            map[arr[i]]++;
        }
        for (auto& itr : st)
            ans.push_back(itr);
        return ans;
    }
};
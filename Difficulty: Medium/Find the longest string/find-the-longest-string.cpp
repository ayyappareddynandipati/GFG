class Solution {
  public:
    string longestString(vector<string> &arr) {
        // code here
        unordered_set<string> s = {""};
        string ans = "";
        sort(arr.begin(),arr.end());
        for(auto str : arr){
            if(s.count(str.substr(0,str.length()-1))){
                if(str.length()>ans.length()) ans = str;
                s.insert(str);
            }
        }
        return ans;
    }
};
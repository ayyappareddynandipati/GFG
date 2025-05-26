// User function Template for C++

vector<int> remove_special_consecutive(vector<int>& arr, int x, int y) {
    // Your code here
    vector<int> res;
    for (int i = 0; i < arr.size(); ++i) {
        if (!res.empty() && res.back() == arr[i] && (arr[i] == x || arr[i] == y)) {
            // skip the current element
            continue;
        } else {
            res.push_back(arr[i]);
        }
    }
    return res;
}
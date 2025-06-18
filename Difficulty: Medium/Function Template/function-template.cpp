// User function Template for C++

template <class T>
T largest(T arr[], int n) {

    // code here
    T res=INT_MIN;
    for(int j=0;j<n;j++)
    {
        if(res<arr[j])
        {
            res=arr[j];
        }
    }
    return res;
}
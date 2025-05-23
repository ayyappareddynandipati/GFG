class Solution {
  public:
    queue<int> rearrangeQueue(queue<int> q) {
        // code here
        int n=q.size()/2;
        queue<int>firstHalf;
        for(int i=0;i<n;i++){
            firstHalf.push(q.front());
            q.pop();
        }
        
        while(!firstHalf.empty()){
            q.push(firstHalf.front());
            firstHalf.pop();
            q.push(q.front());
            q.pop();
        }
        return q;
    }
};
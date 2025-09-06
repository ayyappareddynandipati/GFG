/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // code here
        Node* slow = head;
        Node* fast = head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
            int cnt=1;
            if(fast==slow){
                slow=slow->next;
                while(slow!=fast){
                    cnt++;
                    slow=slow->next;
                }
                return cnt;
            }
        }
        return 0;
    }
};
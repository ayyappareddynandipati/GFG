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
    Node* swapKth(Node* head, int k) {
        // code here
        if(!head) return head;
        Node* dummy=head;
        int n=0;
        while(dummy){
            n++;
            dummy=dummy->next;
        }
        if(k > n || 2 * k - 1 == n) return head;
        Node* prevX = nullptr;
        Node* x = head;
        for(int i = 1 ; i < k ; i++){
            prevX = x ;
            x = x -> next;
        }
        Node* prevY = nullptr;
        Node* y = head;
        for(int i = 1 ; i < n - k + 1 ; i++){
            prevY = y ;
            y = y -> next;
        }
        if (prevX) prevX -> next = y;
        if (prevY) prevY -> next = x;
        
        Node* tempNext = x -> next;
        x -> next = y -> next;
        y-> next = tempNext;
        
        if (k == 1) head = y ;
        if (k == n) head = x ;
        
        return head;
    }
};
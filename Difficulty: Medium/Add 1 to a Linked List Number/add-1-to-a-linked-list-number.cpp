/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    int Helper(Node* head) {
        if (head == nullptr) {
            return 1; // Need to add 1 when we've gone past the last node
        }
    
        int carry = Helper(head->next);
        int sum = head->data + carry;
        head->data = sum % 10;
        return sum / 10;
    }
    Node* addOne(Node* head) {
        // Your Code here
        
        // return head of list after adding one
        int carry = Helper(head);
        if (carry > 0) {
            Node* newNode = new Node(carry);
            newNode->next = head;
            head = newNode;
        }

        return head;
    }
};
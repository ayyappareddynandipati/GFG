/* Link list Node:

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

// Deletes middle of linked list and returns head of the modified list
class Solution {
  public:
    Node* deleteMid(Node* head) {
        // Your Code Here
        if (head == nullptr || head->next == nullptr) 
        return nullptr;

        Node* slow = head;
        Node* fast = head;
        Node* prev = nullptr;
    
        // move slow by 1 and fast by 2
        while (fast != nullptr && fast->next != nullptr) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
    
        // slow is at middle node
        prev->next = slow->next;
        delete slow;
    
        return head;
    }
};
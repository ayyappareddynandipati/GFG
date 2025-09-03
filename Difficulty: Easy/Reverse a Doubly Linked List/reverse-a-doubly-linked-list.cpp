/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        // If the list is empty or has only one node,
      	// return the head as is
        if (head == nullptr || head->next == nullptr)
            return head;
    
        Node *prevNode = NULL;
        Node *currNode = head;
    
        // Traverse the list and reverse the links
        while (currNode != nullptr) {
          
          	// Swap the next and prev pointers
            prevNode = currNode->prev;
            currNode->prev = currNode->next;
            currNode->next = prevNode;
          
          	// Move to the next node in the original list 
          	// (which is now previous due to reversal)
            currNode = currNode->prev;
        }
    
        return prevNode->prev;
    }
};
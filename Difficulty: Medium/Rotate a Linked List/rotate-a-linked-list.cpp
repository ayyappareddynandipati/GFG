/*
class Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* kthNode(Node* temp, int k) {
        int cnt=1;
        while(temp!= nullptr) {
            if(cnt == k) return temp;
            temp = temp->next;
            cnt++;
        }
        return nullptr; // If k is greater than the length of the list
    }
    Node* rotate(Node* head, int k) {
        // code here
        if (head == nullptr || head->next == nullptr || k == 0) return head;

        // Step 1: Find tail and length
        Node* tail = head;
        int length = 1;
        while (tail->next != nullptr) {
            tail = tail->next;
            length++;
        }
    
        // Step 2: Handle k > length
        k = k % length;
        if (k == 0) return head;
    
        // Step 3: Make circular and find new head/tail
        tail->next = head;
        Node* newTail = kthNode(head, k);
        Node* newHead = newTail->next;
        newTail->next = nullptr;
    
        return newHead;
    }
};
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
     Node* reverseList(Node* head){
        Node* prev = nullptr;
        Node* curr = head;
        Node* next = nullptr;
        while (curr != nullptr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    bool isPalindrome(Node *head) {
        //  code here
        if (head == nullptr || head->next == nullptr)
            return true;

        // Step 1: Find middle (slow will stop at mid)
        Node* slow = head;
        Node* fast = head;
        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Reverse the second half
        slow->next = reverseList(slow->next);

        // Step 3: Compare both halves
        Node* first = head;
        Node* second = slow->next;
        bool palindrome = true;
        while (second != nullptr) {
            if (first->data != second->data) {
                palindrome = false;
                break;
            }
            first = first->next;
            second = second->next;
        }

        // Step 4: Restore the list (optional but good practice)
        slow->next = reverseList(slow->next);

        return palindrome;
    }
};
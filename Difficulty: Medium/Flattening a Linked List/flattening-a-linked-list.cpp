/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};
*/

class Solution {
  public:
    Node* merge(Node* head1,Node* head2){
        Node* dummy = new Node(-1);
        Node* tail = dummy;
        while(head1 && head2){
            if(head1->data<=head2->data){
                tail->bottom=head1;
                head1=head1->bottom;
            }else{
                tail->bottom=head2;
                head2=head2->bottom;
            }
            tail=tail->bottom;
        }
        if(head1){
            tail->bottom=head1;
        }else{
            tail->bottom=head2;
        }
        return dummy->bottom;
    }
    Node *flatten(Node *root) {
        // code here
        if(root==nullptr || root->next==nullptr) return root;
        root->next=flatten(root->next);
        root = merge(root,root->next);;
        return root;
    }
};
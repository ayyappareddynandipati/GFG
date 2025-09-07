/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* mergeTwoNodes(Node* a , Node* b){
        Node* dummy = new Node(0);
        Node* curr = dummy;
        while(a != nullptr && b != nullptr){
            if(a->data <= b->data){
                curr->next = a ;
                a = a->next;
            }else{
                curr->next = b ;
                b = b->next;
            }
            curr = curr->next;
        }
        if(a != nullptr){
            curr->next = a ;
        }if(b != nullptr){
            curr->next = b ;
        }
        return dummy->next;
    }
    Node* mergeKLists(vector<Node*>& arr) {
        // code here
        Node* res = nullptr;
        for(Node* n : arr){
            res = mergeTwoNodes(res,n);
        }
        return res;
    }
};
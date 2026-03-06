/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* temp=head;
        while(temp!=NULL){
            Node* clone= new Node(temp->val);
            clone->next=temp->next;
            
            temp->next=clone;
            temp=temp->next->next;


        }
        temp=head;
        while(temp!=NULL){
            if(temp->random!=NULL)temp->next->random= temp->random->next;
            temp=temp->next->next;
        }
        temp=head;
        Node* Dummy=new Node(-1);
        Node* res=Dummy;
        while(temp!=NULL){
            res->next=temp->next;
            temp->next=temp->next->next;
            temp=temp->next;
            res=res->next;
        }
        return Dummy->next;
        
    }
};
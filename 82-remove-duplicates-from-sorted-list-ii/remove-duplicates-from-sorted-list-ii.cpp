/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return nullptr;
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;

        ListNode* curr = head;

        while (curr != nullptr ) {

            if ( curr->next != nullptr && curr->val == curr->next->val) {
                while( curr->next != nullptr && curr->val == curr->next->val){
                    ListNode* dup = curr;
                    curr= curr->next;
                    
                    delete dup; 
                    

                }
                ListNode* temp=curr;
                curr=curr->next;
                delete temp;
                prev->next=curr;

                
                 
            } 
            else {
                prev=curr;
                curr = curr->next;  
            }
        }
        ListNode* result=dummy->next;
        delete dummy;

        return result;
        
    }
};
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return nullptr;

        ListNode* curr = head;

        while (curr != nullptr && curr->next != nullptr) {

            if (curr->val == curr->next->val) {
                
                ListNode* dup = curr->next;
                curr->next = curr->next->next;
                delete dup;   
            } 
            else {
                curr = curr->next;  
            }
        }
        return head;
    }
};

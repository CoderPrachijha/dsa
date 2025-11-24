class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || k == 0) return head;

        
        int len = 0;
        ListNode* temp = head;
        while(temp){
            len++;
            temp = temp->next;
        }

        
        k = k % len;
        if(k == 0) return head;

        
        for(int i = 0; i < k; i++){
            ListNode* curr = head;
            ListNode* prev = nullptr;

            while(curr->next != nullptr){
                prev = curr;
                curr = curr->next;
            }

            
            prev->next = nullptr;
            curr->next = head;
            head = curr;
        }

        return head;
    }
};

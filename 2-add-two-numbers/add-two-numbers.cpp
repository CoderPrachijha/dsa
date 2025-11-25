class Solution {
public:
    

    ListNode* addTwoNumbers(ListNode* head1, ListNode* head2) {

    

        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;

        ListNode* temp1 = head1;
        ListNode* temp2 = head2;
        int carry = 0;

        while(temp1 != NULL || temp2 != NULL || carry){
            int sum = carry;

            if(temp1){
                sum += temp1->val;
                temp1 = temp1->next;
            }

            if(temp2){
                sum += temp2->val;
                temp2 = temp2->next;
            }

            curr->next = new ListNode(sum % 10);
            carry = sum / 10;
            curr = curr->next;
        }

        
        return dummy->next;
    }
};

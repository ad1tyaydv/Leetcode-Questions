class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* temp = head;

        while(temp != NULL && temp->next != NULL) {
            if(temp->val == temp->next->val) {

                int duplicate = temp->val;
                while(temp != NULL && temp->val == duplicate) {
                    temp = temp->next;
                }
                prev->next = temp;
            }
            else {
                prev = temp;
                temp = temp->next;
            }
        }

        return dummy->next;
    }
};

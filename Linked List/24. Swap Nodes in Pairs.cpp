// USING RECURSION
// Time Complexity = O(N) and Spcae Complexity = O(N)

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {

        if(!head || !head->next)  return head;

        ListNode* temp;
        temp = head->next;

        head->next = swapPairs(head->next->next);
        temp->next = head;

        return temp;

    }
};

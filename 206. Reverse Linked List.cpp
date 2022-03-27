class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL or head->next == NULL)
            return head;
        ListNode *curr = head;
        ListNode *prev = NULL, *next = NULL;
        
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr =next;
        }
        head = prev;
        return head;
    }
};

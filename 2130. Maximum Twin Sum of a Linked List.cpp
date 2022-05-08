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
    int pairSum(ListNode* head) {
        int ans = INT_MIN;
        ListNode *slow = head;
        ListNode *fast = head->next;
        while(fast->next and fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode *head2 = slow->next;
        ListNode *current = head2;
        ListNode *prev = NULL, *next = NULL;
        while(current){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head2 = prev;
        while(head2){
            int sum = head->val + head2->val;
            head = head->next;
            head2 = head2->next;
            ans = max(ans,sum);
        }
        return ans;
    }
};

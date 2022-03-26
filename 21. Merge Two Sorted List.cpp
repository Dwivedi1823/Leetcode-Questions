class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode *head = NULL;
        ListNode *tail = NULL;
        
        if(list1 == NULL)
            return list2;
        else if(list2 == NULL)
            return list1;
        
       /* if(list1->val <= list2->val) // This is also working fine!!
            head = tail = list1;
        else
            head = tail = list2;
        
        while(list1 and list2)
        {
            ListNode *temp;
            if(list1->val <= list2->val)
            {
                temp = list1 ;
                list1 = list1->next;
            }
            else
            {
                temp = list2;
                list2 = list2->next;
            }
            tail->next = temp;
            tail = temp;
        }*/
        
        while(list1 and list2){
            if(list1->val <= list2->val){
                list1->next = mergeTwoLists(list1->next, list2);
                return list1;
            }
            else{
                list2->next = mergeTwoLists(list1, list2->next);
                return list2;
            }
        }
        if(list1)
            tail->next = list1;
        if(list2)
            tail->next = list2;
        
        return head; 
    }
};

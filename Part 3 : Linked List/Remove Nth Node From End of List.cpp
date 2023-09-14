 ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast=head;
        for(int i=0;i<n;i++){
            fast=fast->next;
        }
        if(fast==NULL) return head->next;
        ListNode* slow=head;
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return head;
    }

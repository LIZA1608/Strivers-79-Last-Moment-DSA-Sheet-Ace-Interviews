   ListNode* oddEvenList(ListNode* head) {
        if(head==NULL) return head;
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* curr=head->next;
        while(even!=NULL && even->next!=NULL){
            odd->next=odd->next->next;
            odd=odd->next;
            even->next=even->next->next;
            even=even->next;
            
        }
        odd->next=curr;
        return head;
    }

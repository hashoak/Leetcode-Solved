class Solution {
public:
    ListNode* deleteMiddle(ListNode* h) {
        ListNode *s=h,*f=h,*p=NULL;
        while(f!=NULL && f->next!=NULL)
            p=s,s=s->next,f=f->next->next;
        if(p==NULL) return NULL;
        p->next=p->next->next;
        return h;
    }
};
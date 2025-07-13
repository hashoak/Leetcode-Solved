class Solution {
public:
    int pairSum(ListNode* h) {
        ListNode *s=h,*f=h,*n=NULL,*p=NULL;
        while(f && f->next) {
            f=f->next->next;
            n=s->next;
            s->next=p;
            p=s,s=n;
        }
        int ans=0;
        while(p) {
            ans=max(ans,p->val+s->val);
            s=s->next,p=p->next;
        }
        return ans;
    }
};
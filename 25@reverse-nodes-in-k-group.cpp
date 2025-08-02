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
    bool dist(ListNode* head,int k)
    {
        while(--k && head) head=head->next;
        return head;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* p=NULL,*c=head,*n;
        for(int i=0;i<k && c!=NULL;i++)
        {
            n=c->next;
            c->next=p;
            p=c,c=n;
        }
        if(head!=NULL && dist(c,k))
        {
            head->next=reverseKGroup(c,k);
        }
        else head->next=c;
        return p;
    }
};
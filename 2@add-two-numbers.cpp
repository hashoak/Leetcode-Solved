/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(NULLptr) {}
 *     ListNode(int x) : val(x), next(NULLptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int c=0;
        ListNode* l3=new ListNode((l1->val+l2->val+c)%10);
        c=(l1->val+l2->val+c)/10;
        l1=l1->next,l2=l2->next;
        ListNode* temp=l3;
        while(l1 && l2)
        {
            temp->next=new ListNode((l1->val+l2->val+c)%10);
            temp=temp->next;
            c=(l1->val+l2->val+c)/10;
            l1=l1->next,l2=l2->next;
        }
        while(l1)
        {
            temp->next=new ListNode((l1->val+c)%10);
            temp=temp->next;
            c=(l1->val+c)/10;
            l1=l1->next;
        }
        while(l2)
        {
            temp->next=new ListNode((l2->val+c)%10);
            temp=temp->next;
            c=(l2->val+c)/10;
            l2=l2->next;
        }
        if(c) temp->next=new ListNode(1);
        return l3;
    }
};
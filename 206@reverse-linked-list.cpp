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
    ListNode* reverseList(ListNode* h) {
        if(!h) return h;
        ListNode *n=NULL,*p=NULL;
        while(h) {
            p=h->next;
            h->next=n;
            n=h,h=p;
        }
        return n;
    }
};
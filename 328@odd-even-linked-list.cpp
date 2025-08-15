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
    ListNode* oddEvenList(ListNode* h) {
        if(!h) return h;
        ListNode *o=h,*eh=h->next,*e=eh;
        while(o->next!=NULL && o->next->next!=NULL &&
            e->next!=NULL && o->next->next!=NULL) {
            o->next=o->next->next;
            e->next=e->next->next;
            o=o->next;
            e=e->next;
        }
        o->next=eh;
        return h;
    }
};
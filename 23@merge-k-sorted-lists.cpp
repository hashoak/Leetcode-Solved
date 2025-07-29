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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> all;
        ListNode* temp;
        for(auto i:lists)
        {
            temp=i;
            while(temp) all.push_back(temp->val),temp=temp->next;
        }
        sort(all.begin(),all.end());
        ListNode* l=new ListNode();
        temp=l;
        for(auto i:all) temp->next=new ListNode(i),temp=temp->next;
        return l->next;
    }
};
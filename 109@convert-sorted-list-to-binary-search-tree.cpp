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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    TreeNode* shivaaya(vector<int>& list, int s, int e) {
        if(s>e) return NULL;
        int m=(s+e)/2;
        return new TreeNode(list[m],shivaaya(list,s,m-1),shivaaya(list,m+1,e));
    }
public:
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> list;
        while(head) list.push_back(head->val),head=head->next;
        return shivaaya(list,0,list.size()-1);
    }
};
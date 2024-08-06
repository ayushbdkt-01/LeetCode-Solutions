/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp=headA;
        unordered_map<ListNode*,int> m;
        while(temp!=NULL){
            m[temp]=temp->val;
            temp=temp->next;
        }
        temp=headB;
        while(temp!=NULL){
            if(m.find(temp)!=m.end()) return temp;
            temp=temp->next;
        }
        return NULL;

    }
};
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL && n==1){
            return NULL;
        }
        int l=0;
        ListNode* temp=head;
        while(temp!=NULL){
            l++;
            temp=temp->next;
        }
        int pos=l-n+1;
        if(pos==1){
            head=head->next;
            return head;
        }
        int count=1;
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(count<pos){
            prev=curr;
            curr=curr->next;
            count++;
        }
        // ListNode* del=curr;
        prev->next=curr->next;
        // del->next=NULL;
        // delete(del);
        return head;
    }
};
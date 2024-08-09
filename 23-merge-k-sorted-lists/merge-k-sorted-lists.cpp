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
    ListNode* mergeLL(ListNode* &head1,ListNode* &head2){
        if(head1==NULL) return head2;
        if(head2==NULL) return head1;
        ListNode* temp1=head1;
        ListNode* temp2=head2;
        ListNode* dummy=new ListNode(-1);
        ListNode* mainTemp=dummy;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val<temp2->val){
                mainTemp->next=temp1;
                mainTemp=temp1;
                temp1=temp1->next;
            }else{
                mainTemp->next=temp2;
                mainTemp=temp2;
                temp2=temp2->next;
            }
        }
        if(temp1!=NULL) mainTemp->next=temp1;
        if(temp2!=NULL) mainTemp->next=temp2;
        return dummy->next;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
        ListNode* head=lists[0];
        for(int i=1;i<lists.size();i++){
            head=mergeLL(head,lists[i]);
        }
        return head;
    }
};
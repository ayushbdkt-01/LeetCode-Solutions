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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* tail=head;
        ListNode* temp=head;
        int length=1;
        while(tail->next!=NULL){
            length++;
            tail=tail->next;
        }
        k=k%length;
        if(k==0) return head;
        tail->next=head;
        int count=1;
        while(temp!=NULL){
            if(count==length-k){
                head=temp->next;
                temp->next=NULL;
                return head;
            }
            count++;
            temp=temp->next;
        }
        return head;   
    }
};
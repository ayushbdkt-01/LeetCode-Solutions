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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
       vector<int> arr;
       ListNode* temp=head;
        while(temp!=NULL && temp->next!=NULL){
                arr.push_back(temp->val);
                temp=temp->next->next;
        }
        if(temp!=NULL) arr.push_back(temp->val);
        temp=head->next;
        while(temp!=NULL && temp->next!=NULL){
                arr.push_back(temp->val);
                temp=temp->next->next;
        }
        if(temp!=NULL) arr.push_back(temp->val);
        temp=head;
        for(int i=0;i<arr.size();i++){
            temp->val=arr[i];
            temp=temp->next;
        }
        return head;
    }
};
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
private:
    int findGCD(int a,int b){
        if(a==1){return 1;}
        if(b==1){return 1;}
        while(a!=b){
            if(a>b){a=a-b;}
            else{b=b-a;}
        }
        return a;
    }
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        ListNode* prev=head;
        ListNode* curr=prev->next;
        while(curr!=NULL){
            int num1=prev->val;
            int num2=curr->val;
            int gcd=findGCD(num1,num2);
            ListNode* temp=new ListNode;
            temp->val=gcd;
            temp->next=curr;
            prev->next=temp;

            prev=curr;
            curr=curr->next;
        }
        return head;
    }
};
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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL){
            return head;
        }
        ListNode* pre=NULL;
        ListNode* curr=head;
       // ListNode* nex=head->next;
       ListNode* nex=curr;

        while(nex!=NULL){
            nex=curr->next;
            curr->next=pre;
            pre=curr;
            curr=nex;
           // nex=nex->next;
        }
        //curr->next=pre;
        return pre;
        
    }
};

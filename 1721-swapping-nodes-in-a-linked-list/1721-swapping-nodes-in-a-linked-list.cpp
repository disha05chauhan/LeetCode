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
    ListNode* Klast(ListNode* head,int k){
        if(head==nullptr)return nullptr;
        ListNode *curr=head,*prev=head;
        for(int i=0;i<k;i++){
            if(curr==nullptr)return nullptr;
            curr=curr->next;
        }
        
        while(curr!=nullptr){
            curr=curr->next;
            prev=prev->next;
            
        }
        return prev;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *curr=head;
        int i=k;
        while(--k){
            curr=curr->next;
        }
        ListNode *lastElement=Klast(head,i);
        if(lastElement!=nullptr)swap(curr->val,lastElement->val);
        return head;
    }
};
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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==nullptr)return nullptr;
        ListNode *curr=head;
        while(curr->next!=nullptr){
        while(curr->next!=nullptr && curr->next->val!=val){
            curr=curr->next;
        }
            if(curr->next!=nullptr)
            curr->next=curr->next->next;
        }
        if(head->val==val)return head->next;
        return head;
    }
};
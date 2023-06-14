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
        ListNode * first=head;
        ListNode* second=head;
        int i=0;
        while(first!=nullptr && i<n){
            first=first->next;
            i++;
        }
        if(first==nullptr && i<n)return head;
        else if(i==n && first==nullptr)head=head->next;
        else{
            while(first->next!=nullptr ){
                first=first->next;
                second=second->next;
            }
            second->next=second->next->next;
        }
        return head;
    }
};
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
    ListNode* reverse(ListNode* head, int k){
        ListNode *prev=nullptr,*curr=head,*next=nullptr;
        int count=0;
        while(k--){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
        head->next = curr;
        return prev;
    }
    int length(ListNode* head){
        ListNode* curr=head;
        int len=0;
        while(curr!=nullptr){
            len++;
            curr=curr->next;
        }
        return len;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
         int len = length(head);
        ListNode* dummy = new ListNode();
        ListNode* temp = dummy;
        ListNode* cur = head;
        while (cur != NULL) {
            if (len >= k) {
                temp->next = reverse(cur, k);
                len -= k;
                temp = cur;
                cur = cur->next;
            } else {
                break;
            }
        }
        return dummy->next;
    }
};
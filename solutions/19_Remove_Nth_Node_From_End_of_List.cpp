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
        ListNode* dummy = new ListNode(0, head);

        ListNode* A = dummy;
        ListNode* B = dummy;

        while(n--) A = A->next;
        while(A->next != nullptr){
          B = B->next;
          A = A->next;
        }

        ListNode* del = B->next;
        B->next = B->next->next;

        ListNode* ans = dummy->next;

        delete del;
        delete dummy;
        return ans;
    }
};

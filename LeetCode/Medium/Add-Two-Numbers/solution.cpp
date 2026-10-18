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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(0);
        ListNode* curr = ans;
        ListNode* ptr1 = l1;
        ListNode* ptr2 = l2;

        int carr = 0;

        while(ptr1 != nullptr && ptr2 != nullptr){
            int sum = ptr1->val + ptr2->val + carr;
            curr->next = new ListNode(sum % 10);
            carr = sum / 10;
            curr = curr->next;
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        while(ptr1 != nullptr){
            int sum = ptr1->val + carr;
            curr->next = new ListNode(sum % 10);
            carr = sum / 10;

            curr = curr->next;
            ptr1 = ptr1->next;
        }
        while(ptr2 != nullptr){
            int sum = ptr2->val + carr;

            curr->next = new ListNode(sum % 10);
            carr = sum / 10;

            curr = curr->next;
            ptr2 = ptr2->next;
        }
        if(carr != 0){
            curr->next = new ListNode(carr);
        }
        return ans->next;
    }
};
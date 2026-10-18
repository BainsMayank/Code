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
        if(head == nullptr || head->next == nullptr) return head;

        ListNode* temp = head->next;
        ListNode* oddPtr = head;
        ListNode* evenPtr = head->next;

        while(evenPtr != nullptr && evenPtr->next != nullptr){
            oddPtr->next = oddPtr->next->next;
            oddPtr = oddPtr->next;

            evenPtr->next = evenPtr->next->next;
            evenPtr = evenPtr->next;
        }
        oddPtr->next = temp;
        return head;
    }
};
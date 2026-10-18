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
        ListNode* prevptr = NULL;
        ListNode* ptr = head;
        ListNode* nextptr = NULL;

        while(ptr != nullptr){
            nextptr = ptr->next;
            ptr->next = prevptr;
            prevptr = ptr;
            ptr = nextptr;
        }
        return prevptr;
    }
};
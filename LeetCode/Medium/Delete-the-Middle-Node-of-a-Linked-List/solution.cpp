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
    ListNode* deleteMiddle(ListNode* head) {
        int cnt = 0;
        ListNode* ptr = head;
        while(ptr != nullptr) {
            ptr = ptr->next;
            cnt++;
        }
        if(cnt == 1) return nullptr;
        ptr = head;
        int mid = cnt / 2;
        for(int i = 0; i < mid - 1; i++) {
            ptr = ptr->next;
        }
        ptr->next = ptr->next->next;
        return head;
    }
};
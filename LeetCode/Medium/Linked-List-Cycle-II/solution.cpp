/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*, int> mpp;
        ListNode* ptr = head;
        int count = 0;

        while(ptr != nullptr) {
            if(mpp.find(ptr) != mpp.end()) {
                return ptr;
            }
            mpp[ptr] = count;
            count++;
            ptr = ptr->next;
        }
        return nullptr;
    }
};
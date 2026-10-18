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
        int cnt = 0;
        ListNode* ptr = head;
        while(ptr!=nullptr) {
            ptr=ptr->next;
            cnt++;
        };
        ptr = head;
        int target = cnt - n;
        if(target==0) return head->next;
        cnt = 1;
        while(cnt<target){
            ptr=ptr->next;
            cnt++;
        }
        ptr->next = ptr->next->next;
        return head;
    }
};
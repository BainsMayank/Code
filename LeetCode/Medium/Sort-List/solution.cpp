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
    ListNode* mergeSort(ListNode* list1, ListNode* list2){
        ListNode* ans = new ListNode(0);
        ListNode* ptr = ans;
        ListNode* ptr1 = list1;
        ListNode* ptr2 = list2;
        while(ptr1 != NULL && ptr2 != NULL){
            if(ptr1->val < ptr2->val){
                ptr->next = ptr1;
                ptr1 = ptr1->next;
                ptr = ptr->next;
            }
            else{
                ptr->next = ptr2;
                ptr2 = ptr2->next;
                ptr = ptr->next;
            }
        }
        while(ptr1 != NULL){
            ptr->next = ptr1;
            ptr1 = ptr1->next;
            ptr = ptr->next;
        }
        while(ptr2 != NULL){
            ptr->next = ptr2;
            ptr2 = ptr2->next;
            ptr = ptr->next;
        }
        return ans->next;
    }
    ListNode* sort(ListNode* head){
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* right = slow->next;
        slow->next = nullptr;
        ListNode* left = head;
        left = sort(head);
        right = sort(right);
        return mergeSort(left,right);
    }
public:
    ListNode* sortList(ListNode* head) {
        ListNode* ans = sort(head);
        return ans;
    }
};
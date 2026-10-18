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
    bool isPalindrome(ListNode* head) {
        vector<int> vec;
        ListNode* ptr = head;
        while(ptr != nullptr){
            vec.push_back(ptr->val);
            ptr = ptr->next;
        }
        auto it1 = vec.begin();
        auto it2 = vec.rbegin();
        int n = vec.size();
        for(int i=0;i<n/2;i++){
            if(*it1 != *it2) return false;
            it1++;
            it2++;
        }
        return true;
    }
};
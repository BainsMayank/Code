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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* aptr = headA;
        ListNode* bptr = headB;
        ListNode* ans = nullptr;

        map<ListNode*, int> mppA;
        map<ListNode*, int> mppB;
        
        while(aptr != nullptr){
            mppA[aptr]++;
            aptr = aptr->next;
        }
        while(bptr != nullptr){
            mppB[bptr]++;
            bptr = bptr->next;
        }
        for(auto it = mppA.begin(); it != mppA.end(); it++){
            if(mppB.find(it->first) != mppB.end()){
                ans = it->first;
                break;
            }
        }
        return ans;
    }
};
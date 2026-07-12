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
        // hash
        ListNode * curr = headA ;
        unordered_map<ListNode*,bool> seen ;
        while(curr != nullptr) {
            seen[curr] = 1 ;
            curr = curr -> next ;
        }

        curr = headB ;
        while(curr != nullptr) {
            if(seen[curr] == 1) 
                return curr ;
            curr = curr -> next ;
        }
        return nullptr ;
    }
};
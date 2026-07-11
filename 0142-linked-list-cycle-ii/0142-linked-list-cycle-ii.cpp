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
        ListNode* fast = head ;
        ListNode* slow = head ;
        bool meet = false ;

        while(fast != nullptr && fast->next != nullptr) {
            if(meet) {
                fast = fast-> next ;
                slow = slow-> next ;
            }
            else {
                fast = fast-> next ->next ;
                slow = slow-> next ;                
            }
            if(fast == slow) {
                if(meet)
                    return slow ;
                else {
                    meet = 1 ;
                    slow = head ;
                    if(slow == fast)
                        return slow ;
                    continue ;
                }
            }

        }
        return nullptr ;
    }
};
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* prev = head;
        ListNode* cur = head->next;

        int idx = 1;

        int first = -1;
        int last = -1;
        int minDist = INT_MAX;

        while(cur->next){
            ListNode* next = cur->next;

            bool isMax = cur->val > prev->val && cur->val > next->val;
            bool isMin = cur->val < prev->val && cur->val < next->val;

            if(isMax || isMin){
                if(last == -1){
                    first = idx;
                }
                else {
                    minDist = min(minDist, idx - last);
                }

                last = idx;
            }

            prev = cur;
            cur = next;
            idx++;
        }

        if(first == -1 || first == last){
            return {-1, -1};
        }

        int maxDist = last - first;

        return {minDist, maxDist};
    }
};
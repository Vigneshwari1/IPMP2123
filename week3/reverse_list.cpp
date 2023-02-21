
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* current = head;

        while(current){
            ListNode* nxt = current ->next;
            current->next = prev;
            prev = current;
            current = nxt;
        }
        
        return prev;
        
    }
};

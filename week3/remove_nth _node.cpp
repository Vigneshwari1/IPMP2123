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
        int count = 0;
        ListNode* temp = head;

        if(!(temp->next)) return head->next; 

        while(temp){
            temp = temp -> next;
            count++;
        }

        temp = head;

        if(count-n){
            for(int i=1;i<count-n;i++){
                temp = temp -> next;
            }

            ListNode* delete_node = temp->next;
            temp->next = temp->next->next;
            delete(delete_node);          
            return head;
        }

        else {
            return head->next;
        }

    }
};

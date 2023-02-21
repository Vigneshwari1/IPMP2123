class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            ListNode* current1=l1;
            ListNode* current2=l2;
            ListNode* ans = new ListNode();
            ListNode* current = ans;
            int carry =0;
            int add;

        while(current1 || current2 || carry!=0){
            int x = current1?current1->val:0;
            int y = current2?current2->val:0;
            add = x+y+carry;
            current->next = new ListNode(add%10);
            current=current->next;
            carry = add/10;
            current1 = current1?current1->next:NULL;
            current2 = current2?current2->next:NULL;
        }

        return ans->next;
    }
};

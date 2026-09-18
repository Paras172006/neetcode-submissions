class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt = 0;
        ListNode* temp = head;

        while (temp != nullptr) {
            cnt++;
            temp = temp->next;
        }

        // Remove head
        if (n == cnt) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        // Find node just before the one to remove
        int pos = cnt - n - 1;
        ListNode* ans = head;

        for (int i = 0; i < pos; i++) {
            ans = ans->next;
        }

        ListNode* t1 = ans->next;
        ans->next = t1->next;
        delete t1;

        return head;
    }
};
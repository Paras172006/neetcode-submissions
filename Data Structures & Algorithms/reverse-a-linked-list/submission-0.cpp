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
    ListNode* reverseList(ListNode* temp) {
        stack<ListNode*> st;
        ListNode*  head = temp;
       if(head == nullptr) return nullptr;
        while(head->next != nullptr){
            st.push(head);
            head = head->next;
        }
        // if(st.size() <= 0){
        //     return head;
        // }
         ListNode* res = head;
        while(!st.empty()){
          res->next = st.top();
          st.pop();
          res = res->next;
        }
        res->next = nullptr;
        return head;
    }
};

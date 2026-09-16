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
    bool hasCycle(ListNode* head) {
        ListNode* sl = head;
        ListNode* fl = head;
        while(fl != nullptr && fl->next != nullptr){
            
            sl = sl->next;
            fl = fl->next->next;
            if(sl == fl){
                return true;
            }
        }
        return false;
    }
};

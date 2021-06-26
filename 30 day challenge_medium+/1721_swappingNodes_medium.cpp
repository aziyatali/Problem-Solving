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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *left = nullptr, * right = nullptr;
        
        for(auto p = head; p!=nullptr; p = p->next){
            right = right == nullptr ? nullptr : right->next;
            if (--k == 0){
                right = head;
                left = p;
            }
        }
        swap(left->val, right->val);
        return head;
        
    }
};

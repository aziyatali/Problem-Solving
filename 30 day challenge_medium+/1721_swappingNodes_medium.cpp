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
        ListNode *left = head, * right = head, * count = head;
        int l = k, counter = 0;
        while(count->next!=NULL){
            count = count->next;
            counter++;
        }
        
        while(l > 1){
            left = left->next;
            l--;
        }
        counter-=k;
        while(counter--){
            if(right->next->val == left->val){
                right->next = left->next;
            }
            right = right->next;
        }
        ListNode * temp = right->next;
        right = temp->next;
        return head;
        
    }
};

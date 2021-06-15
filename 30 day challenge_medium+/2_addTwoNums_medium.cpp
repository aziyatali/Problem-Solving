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
ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode sum(0), *p = &sum;
    cout<<sum.val;
    int extra = 0;
    while(l1 || l2 || extra){
        if (l1){
            extra += l1->val;
            l1 = l1->next;
        }
        if (l2){
            extra += l2->val;
            l2 = l2->next;
        }
        p->next = new ListNode(extra % 10);
        extra/=10;
        p = p->next;
    }
    return sum.next;
    }
};

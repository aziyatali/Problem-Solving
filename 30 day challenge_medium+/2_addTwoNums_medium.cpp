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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * sum = l1;
        int remainder = 0;
        addNumbers(l1, l2, sum, remainder);
        return sum;
        
    }
    void addNumbers(ListNode * l1, ListNode *l2, ListNode *sum, int remainder){
        if (l1==NULL && l2==NULL){
            return;
        }
        
        cout<<"l1: "<<l1->val<<endl;
        cout<<"l2: "<<l2->val<<endl;

        sum->val = (l1->val + l2->val+remainder)%10;
        remainder=(l1->val + l2->val)/10;

        // sum = sum->next;
        // l1 = l1->next;
        // l2 = l2->next;
        if (l1->next==NULL && l2->next==NULL && remainder>0){
            sum->next = sum;
            sum = sum->next;
            sum->val = remainder;
        }
        cout<<": "<<remainder<<endl;
        addNumbers(l1->next, l2->next, sum->next, remainder);

    }
};

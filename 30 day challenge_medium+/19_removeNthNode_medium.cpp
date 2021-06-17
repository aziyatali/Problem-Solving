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
        int counter = 0;
        ListNode * temp, *prev, *remove;
        temp = head;
        remove = head;
        while(temp!=NULL){
            temp = temp->next;
            counter++;
        }
        counter-=n;
        if (counter == 0){
            head = remove->next;
            return head;
        }
        while (counter--){
            prev = remove;
            remove = remove->next;
        }
        prev->next = remove->next;
        return head;
        
    }
};

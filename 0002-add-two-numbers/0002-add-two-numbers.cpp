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
        
        ListNode dummy(0);
        ListNode* newHead=&dummy;
        int qoe=0;
        while(l1 || l2 || qoe){
            int s = qoe ;
            if(l1){
                s += l1->val;
                l1 =l1->next;
            }
            if(l2){
                s += l2->val;
                l2 = l2->next;
            }
            qoe =s/10;
            newHead->next =new ListNode(s%10);
            newHead=newHead->next;
        }
        return dummy.next;
    }
};
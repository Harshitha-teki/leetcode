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
        int tot=0;
        ListNode* temp=head;
        while(temp){
            tot++;
            temp=temp->next;
        }
        temp=head;
        if(tot==n){
            ListNode* newNode = head->next;
            delete head;
            return newNode;
        }
        for(int i=0; i<tot-n-1; i++){
            temp =temp->next;
        }
        ListNode* newNode = temp->next;
        temp->next = temp->next->next;
        delete newNode;
        return head;
    }
};
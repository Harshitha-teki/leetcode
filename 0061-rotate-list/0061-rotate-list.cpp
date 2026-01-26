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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp = head;
        vector<int>v;
        if(head == NULL || k==0){
            return head;
        }
        while(temp != NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }
        int n = v.size();
        k = k%n;
        if(k==0){
            return head;
        }
        reverse(v.begin(), v.end());
        reverse(v.begin(),v.begin()+k);
        reverse(v.begin()+k, v.end());
        temp =head;
        int i=0;
        while(temp){
            temp -> val =v[i];
            i++;
            temp = temp->next;
        }
        return head;
    }
};
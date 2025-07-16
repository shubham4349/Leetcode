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
    ListNode* deleteDuplicates(ListNode* head) {
        
       ListNode* temp=head;
      // ListNode* tempo=head;
       while(temp!=nullptr and temp->next!=nullptr){
           if(temp->val==temp->next->val){
              ListNode* nodeToDelete= temp->next;
              temp->next = temp->next->next;
              delete nodeToDelete;
           }
            else   temp=temp->next;
       }
       return head; // temp return kraoge to bas last wala nde milega...coz u travelled till last
           
    }
};
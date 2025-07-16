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
    ListNode* mergeNodes(ListNode* head) {
        // ListNode* temp1=head; // 0 se 0 travesere krne ke liye
        // ListNode* temp2=head; // start se end list traverse krne ke liye
        // temp1=temp1->next;

        ListNode* newnode = new ListNode(0);
        ListNode* curr = newnode;
        ListNode* temp= head->next; // kyuki starte me to 0 h

        int sum=0;
        while(temp!=nullptr){

             if(temp->val!=0){
                sum +=temp->val;
             }else{ // join them
                 curr->next = new ListNode(sum);
                 curr = curr->next;
                 sum=0;
             }

             temp=temp->next;
        }
        return newnode->next; // 0->4->11

      
    }
};
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
        
        ListNode* temp=head;
        int len=0;
        while(temp!=nullptr){
            len++;
            temp= temp->next;
        }
        temp=head;
        int posn= len-n+1; // position of node from front

         // if posn ==1 yani dleete head
        if(posn==1){
            ListNode* delHead= head;
            head = head->next;
            delete delHead;
            return head;
        }
        for(int i=1; i<posn-1; i++){
              temp = temp->next; // position ke ek pehle tak aagye
              // last me 2nd node will be equal to 3rd---> imp
              // agar posn-1 include krta to 3 = 3->next(yani temp 4 bngya hota)
        }
       
        // delete the next node
        ListNode* del= temp->next;
        temp->next = temp->next->next;
        delete del;

        return head;


    }
};
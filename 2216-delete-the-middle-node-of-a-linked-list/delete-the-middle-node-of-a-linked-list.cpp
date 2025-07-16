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
    ListNode* deleteMiddle(ListNode* head) {
        // saame jese tune middle of LL ka code likha tha using lenth

        ListNode* temp=head;
        if (head==nullptr || head->next==nullptr)
            return nullptr;  // edge case-> 0 ya 1 node hone pe
        int len=0;
        while(temp){
            len++;
            temp=temp->next;
        }
        temp=head;
        int midPosn = len/2 ;  // node to be deleted;
        int checkLen=0;
        // while(temp){
        //     if(checkLen==midPosn-1){ // uske ek pehle pe aake ruko taki linkage na khatm ho
        //         ListNode* nodeToDelete= temp->next;
        //         temp->next= temp->next->next; // RUNTIME ERR 
        //         delete nodeToDelete;
        //         break;
        //     } 
        //      checkLen++;
        //      temp=temp->next;
        // }
        int i=0;
        while(i<midPosn-1){
            temp=temp->next;
            i++; 
        } // i ab midPosn-1 pe h
               ListNode* nodeToDelete= temp->next;
                temp->next= temp->next->next;
                delete nodeToDelete;

        return head;
    }
};
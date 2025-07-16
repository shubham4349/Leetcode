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
    ListNode* middleNode(ListNode* head) {
        // wihtout using slow and fast point

        ListNode* temp=head;
        int len=0;

        while(temp!=nullptr){
            len++;
            temp=temp->next;
        }
        temp=head;
    //     int midNode= len/2;
    //  //   if(midNode%2!=1) midNode=midNode+1; // agar even h to second middle node
    //      if(midNode%2==1) 
        int midPosn=0;
        if(len%2==1) midPosn = len/2 +1;
        else midPosn= len/2 +1; // from example
          
        int newLen=0;
        while(temp!=nullptr){
            newLen++;
            if(newLen==midPosn){
                 break;
            }
             temp=temp->next;
           
        }
        return temp;

    }
};
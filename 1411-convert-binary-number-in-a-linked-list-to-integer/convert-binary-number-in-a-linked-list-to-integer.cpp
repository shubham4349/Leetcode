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
    int getDecimalValue(ListNode* head) {
      
        //Approach:2 without using extra space
        // ListNode* temp= head;
        // int ans=0;
        // int j=0;
        // while(temp!=nullptr){ // ye galt answer de rha kyuki list start se travese ho rhi
        //     ans += temp->val*pow(2,j);
        //     j++;
        //     temp = temp->next;
        // }
      
        // return ans;
        ListNode* temp1=head;
        int len=0;
        while(temp1!=nullptr){ // linked list ki len nikal rha
            len++;
            temp1=temp1->next;
        }
      //  len = len-1; // 0 se powering krni h isliye
        ListNode* temp2=head;
        int ans=0;
        int j=len-1;
        while(temp2){
            ans += temp2->val*pow(2,j);
            j--;
            temp2= temp2->next;
        }
        return ans;

    }
};
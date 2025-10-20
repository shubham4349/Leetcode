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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        // logic
        // eg-2
        // 5.nxt = 1004.nxt // a ka next
        // 1.nxt = 1000   // b ka next
       
        ListNode* l2=list2;
        while(l2->next!=nullptr){
            l2=l2->next;
        }
        ListNode* temp=list1;
        for(int i=0; i<b; i++){
            temp=temp->next;
        }
        l2->next=temp->next;

         ListNode* l1=list1;
         for(int i=0; i<a-1; i++){
              l1=l1->next;
         }
         l1->next=list2;

         return list1;

    }
};
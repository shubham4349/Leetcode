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
	ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
  {
		ListNode dummy(0);
        ListNode* curr = &dummy;

        while(list1 and list2){ // jab tak dono null ke equal nhi h tab tak ye loop chalega

        if(list2->val >list1->val){
            curr->next = list1;
            list1 =list1->next; 
        }
        else{
             curr->next = list2;
            list2 =list2->next; 
        }
        curr = curr->next;

        }
        curr->next = list1 ? list1 : list2;

        return dummy.next;

	}
};	
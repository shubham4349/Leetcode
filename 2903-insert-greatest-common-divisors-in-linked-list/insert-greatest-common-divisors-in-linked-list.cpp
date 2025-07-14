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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        
        //Approach 2: Optimal
        ListNode* temp= head;
        while(temp and temp->next){ // jabtak null nhi h tab tak chalega
                int n1= temp->val;
                int n2= temp->next->val;
                int gcd = __gcd(n1,n2);
                ListNode* node1 = new ListNode(gcd); 
                node1->next = temp->next;
                temp->next= node1;
                temp= node1->next;
        }
        return head;
    }
};
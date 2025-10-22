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
 #define pb push_back
class Solution {
public:
    bool isPali(vector<int> arr){
        vector<int> orig=arr;
        reverse(arr.begin(),arr.end()); // or u can use 2 pntr, while i>=j
        return orig==arr;
    }
    bool isPalindrome(ListNode* head) {
         ListNode* temp=head;
         vector<int> arr;

         while(temp!=nullptr){
             arr.pb(temp->val);
             temp=temp->next;
         }
         bool ans= isPali(arr);
         return ans;
         
    }
};
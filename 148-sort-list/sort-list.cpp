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
    ListNode* sortList(ListNode* head) {
        // brute--> usign array

        ListNode* temp=head;
        vector<int> arr;
        while(temp!=nullptr){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        sort(begin(arr),end(arr));
        // now push arr elemnets to a LL

        if(arr.size()==0) return nullptr;
        ListNode* nodeHead= new ListNode(arr[0]);
        ListNode* curr=nodeHead;
        for(int i=1; i<arr.size(); i++){
            curr->next=new ListNode(arr[i]);
            curr=curr->next;
        }
        return nodeHead;
        
    }
};
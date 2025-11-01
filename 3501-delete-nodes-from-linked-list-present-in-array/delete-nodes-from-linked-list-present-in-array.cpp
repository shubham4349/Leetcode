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
    bool delNode(vector<int>& nums, int val){
        // for(int i=0; i<nums.size(); i++){
        //     if(val==nums[i]) return true; // delete this node
        // }
        // return false; // TLE aaya linear search

        if(binary_search(begin(nums),end(nums),val)) return true;
        return false;
    }
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
         sort(nums.begin(),nums.end());
        while(head!=nullptr and delNode(nums,head->val)){ // head delete kiya
            //  ListNode* temp1=head;
             head=head->next;
            // delete temp1;
        }
          ListNode* temp2=head;
        while(temp2!=nullptr and temp2->next!=nullptr){
            if(delNode(nums,temp2->next->val)){ // delete this node
                //    ListNode* del=temp2->next;
                   temp2->next=temp2->next->next;
                //    delete del;
            } else temp2=temp2->next;
        }
        return head;
    }
};
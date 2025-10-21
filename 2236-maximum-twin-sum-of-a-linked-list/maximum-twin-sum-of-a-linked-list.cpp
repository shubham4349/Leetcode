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
    int pairSum(ListNode* head) {
        // concept
        // 0 last node ka twin
        // 1 last-1
        // 2 last-2 ka twin
        // so brute me LL ke data ko array me daldo fir uspe opn kr sakte ho
        // optimal-> ll ko reverse krke add krke check rklo
        ListNode* temp=head;
        int maxm=INT_MIN;

        vector<int> nums;
        while(temp!=nullptr){
            nums.push_back(temp->val);
            temp=temp->next;
        }
       // nums.push_back(temp->val);
        vector<int> orig=nums;
        reverse(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            maxm=max(maxm,nums[i]+orig[i]);
        }
          return maxm;
    }
};
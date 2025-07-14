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
        vector<int> data;
        ListNode* temp= head;
        while(temp!=nullptr){
            data.push_back(temp->val);
            temp = temp->next;
        }
        int ans=0;
        int n=data.size();
        int j=0;
        for(int i=n-1; i>=0; i--){
            ans += data[i]*pow(2,j);
            j++;
        }
        return ans;

    }
};
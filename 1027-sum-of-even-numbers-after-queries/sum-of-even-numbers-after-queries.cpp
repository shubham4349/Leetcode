class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> ans;
        for(auto& q:queries){
            int idx=q[1];
            int val=q[0];
            nums[idx]+=val;
            int sum=0;
            for(int i=0; i<nums.size(); i++){
               if(nums[i]%2==0) sum+=nums[i];
            }
            ans.push_back(sum);
        }
        return ans;
    }
};
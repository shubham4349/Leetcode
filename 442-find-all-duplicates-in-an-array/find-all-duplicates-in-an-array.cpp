class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
         int n=nums.size();

         unordered_map<int,int> count;

         for(int i=0; i<n; i++) count[nums[i]]++;
         set<int> hello;
         for(int i=0; i<n; i++){
            if(count[nums[i]]==2) {
                if(hello.count(nums[i])==0) hello.insert(nums[i]); 
            }
         }
         vector<int> ans(hello.begin(), hello.end());
         return ans;
    }
};
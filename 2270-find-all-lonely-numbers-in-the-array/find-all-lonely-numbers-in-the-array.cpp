class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        
        int n=nums.size();

        unordered_map<int,int> count;

        for(int i =0; i<n; i++) count[nums[i]]++;
 
        vector<int> ans;

         // approach: num ki count 1 ho, and num-1, num+1 array me na ho
        for(int i =0; i<n; i++){
            if(count[nums[i]]==1){
                 if(count[nums[i]-1]==0 and count[nums[i]+1]==0) ans.push_back(nums[i]);
            }
         }
    return ans;
  }
};
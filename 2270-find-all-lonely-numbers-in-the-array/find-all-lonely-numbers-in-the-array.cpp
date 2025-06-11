class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        
        int n=nums.size();

        unordered_map<int,int> freq;

        for(int i =0; i<n; i++) freq[nums[i]]++;
 
        vector<int> ans;

         // approach: num ki count 1 ho, and num-1, num+1 array me na ho
        for(int i =0; i<n; i++){
            if(freq[nums[i]]==1){
                 int less = nums[i]-1;
                 int more = nums[i]+1;
                if(!freq.count(less) and !freq.count(more)) ans.push_back(nums[i]);
            }
         }
    return ans;
  }
};
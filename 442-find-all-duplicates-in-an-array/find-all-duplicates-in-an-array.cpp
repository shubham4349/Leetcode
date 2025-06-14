class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
         int n=nums.size();

        unordered_map<int,int> count;

         for(int i=0; i<n; i++) count[nums[i]]++; 
      
        // bete jb hasmap use kiya h to usi ko iterate kiya kr-> TC kam aayegi
          vector<int> ans;
          for(auto it : count) {
            if(it.second ==2) ans.push_back(it.first);
          }
          return ans;
    }
};
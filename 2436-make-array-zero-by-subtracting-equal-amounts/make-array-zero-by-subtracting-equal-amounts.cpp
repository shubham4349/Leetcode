class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
        int n=nums.size();
        unordered_map<int,int> count;

        for(auto i : nums) count[i]++;
        int ans=0;
        for(auto it: count){
              if(it.first !=0) ans++;
        } 
        return ans;
    }
};
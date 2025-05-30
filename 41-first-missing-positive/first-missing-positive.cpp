class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();

        unordered_set<int> temp;

        for(int i =0; i<n; i++){
            if(nums[i]>0) temp.insert(nums[i]);
        }
        for(int i=1; i<=n+1; i++){
            if(!temp.count(i)) return i; 
        }
        return -1;
    }
};
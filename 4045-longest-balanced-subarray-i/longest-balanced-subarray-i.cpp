class Solution {
public:
    int longestBalanced(vector<int>& nums) {
         int n=nums.size();
         int maxlen=0;
         for(int i=0; i<n; i++){
             set<int> odd,even;
             int len=0;
             for(int j=i; j<n; j++){
                 if(nums[j]%2==0) even.insert(nums[j]);
                 else odd.insert(nums[j]);
                 len++;
                 if(odd.size()==even.size()){
                     maxlen=max(maxlen,len);
                 }
             }
         }
         return maxlen;
    }
};
class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int n=nums.size();
        long long ans=0;
        long long sum=0;
        int i=0,j=0;

        while(j<n){
           sum+= nums[j];
           while(i<=j and sum*(j-i+1)>=k){ // shrink the window
              sum-=nums[i];
              i++;
           }
           ans+= j-i+1;
           j++;
         }
         return ans;
    }

};
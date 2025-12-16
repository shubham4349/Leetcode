class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        // even index pe maxm number rkho
        // odd me minm
        int n=nums.size();
        for(int i=0; i<n; i++){
            nums[i]*=nums[i];
        }
        sort(nums.begin(),nums.end(),greater<int>());

        int i=0;
        int j=n-1;
        long long sum=0;
        while(i<j){
           sum+=nums[i]; // maxm
           sum-=nums[j];// minm;
           i++;j--;
        }
        if(n%2==1) sum+=nums[n/2]; // odd case
        return sum;
    }
};
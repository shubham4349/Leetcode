class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> maxarr(n,0);
        int maxm=INT_MIN;
        for(int i=0; i<n; i++){
            maxm=max(maxm,nums[i]);
            maxarr[i]=maxm; // i tak ka ma value
        }
        int minm=INT_MAX;
        vector<int> minarr(n,INT_MAX);
        for(int i=n-1; i>=0; i--){
            minm=min(minm,nums[i]); // n-1 se i me minm value
            minarr[i]=minm;
        }
        vector<int> ans(n,0);
        for(int i=0; i<n; i++){
            ans[i]=maxarr[i]-minarr[i]; 
            if(ans[i]<=k) return i;
        }
        return -1;
    }
};
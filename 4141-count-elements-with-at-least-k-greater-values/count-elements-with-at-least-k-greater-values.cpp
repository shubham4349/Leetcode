class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        // map<int,int> cnt;
        // for(int num:nums){
        //     cnt[num]++;
        // }
        // jis num ka cnt 1 h, uska n-1-i eleemtn greater h
        int ans=0;
        for(int i=0; i<n; i++){
            //  if(cnt[nums[i]]==1){
            //     if(n-1-i>=k) ans++; // k elements isse greater h
            //  } else{
            //     // cnt>1 rehne pe.. uss element ke last occurence pe jao,
            //     // fir wha se n-1-i calculate kr-> upper_bund
            //     int idx=upper_bound(nums.begin(),nums.end(),nums[i])-nums.begin();
            //     if(n-1-idx>=k) ans++;
            //  }
            int idx=upper_bound(nums.begin(),nums.end(),nums[i])-nums.begin();
            if(n-idx>=k)ans++;
        }
        return ans;
    }
};
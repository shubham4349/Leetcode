class Solution {
public:
    // bool majorityElement(vector<int>& nums,int target){
    //     int cnt=0;
    //     int n=nums.size();
    //     for(int num:nums){
    //         if(num==target) cnt++;
    //     }
    //     return cnt>n/2;
    // }
    // len= lastidx-first+1-> 5-0+1=6
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n=nums.size();
        int ans=0;
        for(int i=0; i<n; i++){
             int cnt=0;
            for(int j=i; j<n; j++){
               if(nums[j]==target) cnt++;
               if(cnt>(j-i+1)/2) ans++;
            }
        }
        return ans;
    }
};
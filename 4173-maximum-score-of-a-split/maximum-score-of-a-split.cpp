#define ll long long
class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int n=nums.size();
        vector<ll> pref(n-1),suff(n-1);
        pref[0]=nums[0];
        for(int i=1; i<n-1; i++){
            pref[i]=pref[i-1]+nums[i];
        }
        // given i<n-1;
        suff[n-2]=nums[n-1];
       // ll minm=LLONG_MAX;
        for(int i=n-3;i>=0; i--){
            ll x=nums[i+1];
            suff[i]=min({suff[i+1],x}); // min me same val ki chekc krna({ll,ll})
            //suff[i]=minm;
        }
        ll maxm=LLONG_MIN;
        for(int i=0; i<n-1; i++){
            maxm=max(maxm,pref[i]-suff[i]);
        }
        return maxm;
    }
};
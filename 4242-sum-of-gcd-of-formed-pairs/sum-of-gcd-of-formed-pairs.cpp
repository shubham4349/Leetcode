#define ll long long
class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        int maxm=INT_MIN;
        vector<int> prefixGcd(n,0);
        for(int i=0; i<n; i++){
           maxm=max(nums[i],maxm);
           prefixGcd[i]=__gcd(nums[i],maxm);
        }
        sort(prefixGcd.begin(),prefixGcd.end());
        int i=0;
        int j=n-1;
        ll ans=0;
        while(i<j){
            ans+=__gcd(prefixGcd[i],prefixGcd[j]);
            i++;j--;
        }
        return ans;
    }
};
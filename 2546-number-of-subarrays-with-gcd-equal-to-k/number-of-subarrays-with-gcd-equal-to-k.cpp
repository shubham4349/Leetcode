#define ll long long int
class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int n=nums.size();
       // int cnt=0;
        // for(int i=0; i<n; i++){
        //     if(nums[i]==k) cnt++;
        // }
        // for(int i=0; i<n-1; i++){
        //     if(__gcd(nums[i], nums[i+1])==k) cnt++;
        // }
        // return cnt;
        int cnt=0;
        for(int i=0; i<n; i++){
            int gcd=0;
            for(int j=i; j<n; j++){
                gcd = __gcd(nums[j],gcd);
                if(gcd==k) cnt++;
            }
    }
    return cnt;
    }
};
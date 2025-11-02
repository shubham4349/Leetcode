#define all(x) (x).begin(),(x).end()
class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        // abs max and secins max nikal
        // agar dono ka mutliply + h to *1e5
        // else multiply -1e5

        for(int &num:nums){
            if(num<0) num=num*-1;
        }
        sort(all(nums));
        reverse(all(nums));

        return 1LL*nums[0]*nums[1]*1e5;
    }
};
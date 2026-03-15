class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        map<int,int> cnt;
        for(int num:nums) cnt[num]++;
        for(int num:nums){
            if(num%2==0 and cnt[num]==1) return num;
        }
        return -1;
    }
};
class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        
        // alag alag numers jo twice aaye h unka xor...agar 1 number hi twice h to number return krdo
        map<int,int> count;
        // int xorr=0;
        for(int num: nums){
            count[num]++;
        }
        int ans=0;
        for( auto it: count){
            if(it.second==2){
                ans ^= it.first;
            }
        }
        return ans;
    }
};
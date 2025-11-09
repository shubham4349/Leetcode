#define all(v) (v).begin(),(v).end()
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxm=*max_element(all(nums));
        int moves=0;
        for(int num:nums){
            if(num!=maxm) moves+=maxm-num;
        }
        return moves;
    }
};
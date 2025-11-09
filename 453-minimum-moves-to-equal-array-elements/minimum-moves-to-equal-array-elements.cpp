#define all(v) (v).begin(),(v).end()
class Solution {
public:
    int minMoves(vector<int>& nums) {
        // sort(all(nums));
        int moves=0;
        // n-1 ko 1 se badhana = 1 element ko 1 se ghatana
        int minm=*min_element(all(nums));
        for(int num:nums) moves+=num-minm; 
        return moves;
    }
};
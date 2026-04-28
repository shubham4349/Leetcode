class Solution {
public:
    int minMoves(vector<int>& nums) {
          int n=nums.size();
          // sare number ko minm banao
          int minm=*min_element(nums.begin(),nums.end());
          int moves=0;
          for(int i=0; i<n;i++){
             moves+=(nums[i]-minm); // ek element ko minm banane me kitne steps
          }    
          return moves;    
    }
};
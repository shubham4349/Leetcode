class Solution {
public:
    vector<int> countBits(int n) {
        
      // using builtin method

      // __builtin_popcount(x) -> count no of 1 in binary repre of x.
       vector<int> ans(n+1, 0);
      for(int i=0; i<n+1; i++){
          ans[i] = __builtin_popcount(i);

      }
      return ans;
    }
};
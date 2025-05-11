class Solution {
public:
    int solve(int n, vector<int>& dp){

        if(n<=1) return n;

        if(dp[n]!=-1) return dp[n]; // ,tlb dp solve ho rkha h

        

        return dp[n] = solve(n-1,dp) + solve(n-2, dp);;
    }
    int fib(int n) {
       
      if(n<=1) return n;

      vector<int> dp(n+1, -1); // 0 to n is the size of 1d dp array
       
       return solve(n, dp);
       
    }
};
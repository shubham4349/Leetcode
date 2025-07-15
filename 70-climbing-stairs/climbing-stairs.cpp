class Solution {
public:
    int climbStairs(int n) {
        
        // without dp;

        // if(n<=2) return n;
        // int step1=1; int step2=2;
        // for(int i=3; i<=n; i++){
        //        int temp=step1+step2;
        //        step1=step2;
        //        step2=temp;
        // }
        // return step2;

        // with dp
        if(n<=2) return n;
        vector<int> dp(n+1);
        dp[1]=1;
        dp[2]=2;
        for(int i=3; i<=n; i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};
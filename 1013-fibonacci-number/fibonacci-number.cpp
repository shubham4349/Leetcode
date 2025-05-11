class Solution {
public:
    int fib(int n) {
       
       if(n==0) return 0;
       if(n==1) return 1;
       vector<int> pre(n+1);
       pre[0] = 0;
       pre[1] = 1;
       for(int i =2; i<=n; i++){
            pre[i] = pre[i-1] + pre[i-2];
       }

       return pre[n];
       
    }
};
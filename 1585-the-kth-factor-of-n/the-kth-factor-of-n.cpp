class Solution {
public:
    int kthFactor(int n, int k) {
        int factorCnt=0;
        int i=1;
        int ans=-1;
       // if(n)
       // if(n<=k) return -1;
        while(true){
            if(n%i==0) factorCnt++;
            if(factorCnt==k){
                 ans=i;
                 break;
            }
            if(i>n) break;
            i++;
        }
        return ans;
    }
};
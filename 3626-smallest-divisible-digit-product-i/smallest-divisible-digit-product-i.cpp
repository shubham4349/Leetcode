class Solution {
public:
    int digitPro(int a){
        if(a<=9) return a;
        int pro=1;
        while(a>0){
            int digit= a%10;
            pro *=digit;
            a=a/10;
        }
        return pro;
    }
    int smallestNumber(int n, int t) {
        int ans;
         while(true){
             if(digitPro(n)%t==0) {
                ans=n;
                break;
             }
             n++;
         }
         return ans;
    }
};
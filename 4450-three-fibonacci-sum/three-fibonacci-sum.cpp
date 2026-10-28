#define ll long long
class Solution {
public:
    bool threeFibonacciSum(int n) {

        // fibo-> 0,1,1,2,3,5..
        // a,b,a+b,a+2b,2a+3b,
        int a=0,b=1;
        while(true){
            ll c=a+b;
            ll sum=a+b+c;

            if(sum>n) return false; // 
            else if(sum==n) return true;
            a=b;
            b=c;
        }
        return false;
    }
};
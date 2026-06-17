class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        // n , k always >1 
        // x is give postive
        // -k<=n-x<=+k mod hatane ka condn h 
        // x lie krega from n-k to n+k  
        int sum=0;
        for(int x=max(1,n-k); x<=n+k; x++){
            if((n&x) ==0) sum+=x;
        }
        return sum;
    }
};
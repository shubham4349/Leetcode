class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000) return 0;
        long long commaCnt=0;
        // 1,000-> 999,999 -> 4-6 digit me 1comma
        // 1,000,000-> 999,999,999-> 7 se 9 digit me 2 comma
        // 1,000,000,000-> 999,999,999,999-> 10 se 12 me 3 comma
        // 1,000,000,000,000-> 999,999,999,999,999(<10 ka pwr 15) -> 13-15 me 4
    //     if(n==1000000000000000) return 5; ///1e15
    //     if(n>=1000 and n<=999999) return 1;
    //    else if(n>=1000000 and n<=999999999) return 2;
    //    else if(n>=1000000000 and n<=999999999999) return 3;
    //    else return 4;
    //    return -1;

        // har 1000 pe comma aarha
        for(long long i=1000; i<=n; i*=1000){
             commaCnt+=(n-i+1); 
        }
        return commaCnt;

    }
};

     class Solution {
public:
    bool isPowerOfTwo(int n) {

        if(n<=0) return false;
        //using bit manipulation

         // concept
         // power of 2 h only 1 set bit;
             // 2 = 10
            // 4 = 100
            // 8 = 1000
            // 16 = 10000 

    // if n is a power of 2 then->(n & n-1 ==0)

    //    n      = 8  = 1000
    //    n - 1  = 7  = 0111

    // now perform bitwise and (multiply) 

    // n        = 1000
    // n - 1    = 0111
    // ----------------
    // AND      = 0000


    return  n>0 and (n & (n-1))==0;

    }
};

 
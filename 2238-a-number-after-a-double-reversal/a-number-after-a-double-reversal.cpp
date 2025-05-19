class Solution {
public:
    bool isSameAfterReversals(int num) {
        
        int reversed1 = doubleRev(num);
        int reversed2 = doubleRev(reversed1);

        if(num==reversed2) return true;
        return false;

    }
    int doubleRev(int a){
        
        int rev=0;
        while(a>0){
            int digit = a%10;
            rev = rev*10+ digit;
            a /= 10;
        }
        return rev;
    }
};
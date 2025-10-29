class Solution {
public: 
    bool checkSetBit(int n){
        while(n>0){
            int digit=n%2;
            if(digit==0) return false; // bit 0 nikal gya
            n/=2;
        }
        return true;
    }
    int smallestNumber(int n) {

        while(true){
            if(checkSetBit(n)) break;
            n++;
        }
        return n;
    }
};
class Solution {
public:
    int hammingDistance(int x, int y) {
        // funda->
        // calculate xor 
        // 1011 
        // 1100 
        // xor me dono bits same ho to 0 aata h

        // 10101 --isme 3 positions diff the

        int xorr= x xor y;
        // now just count 1 bit in their binary repre
        // wither use brute or builtin
        // brute
        //  while(xorr>0){
        //     int digit=xorr%2;
        //     if(digit==1) cnt++;
        //     xorr/=2;
        // }
        return __builtin_popcount(xorr);
    }
};
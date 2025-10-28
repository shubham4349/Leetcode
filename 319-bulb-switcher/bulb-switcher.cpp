class Solution {
public:
    int bulbSwitch(int n) {
        
        // concept
        // round 0-> off
        // 1- on
        // 2=off
        // 3=on
        // 4=off 
        // yani bulb odd no. of round me hi ON h
        // take ag-> 20 and draw rough diagram
        // eventually ull see that only perfect square no' of rounds are ON 
        // for 20-> 1,4,9,16 ; ans-> sqrt(20)-> 4.x-> 4
        // so, 
         return sqrt(n);
    }
};
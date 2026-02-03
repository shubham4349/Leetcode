class Solution {
public:
    int minPartitions(string n) {
        // sirf 1,0 wale decimal numbers se n banana h
        // simple obsevatin->
        // 5-> 1+1+1+1+1 
        // 9-> 1+1+1...+1 
        // 32 -> agar sirf 1,0's wale se 32 banan h.. 
        // then u'll need 10 + 11 + 11 

        sort(begin(n),end(n),greater<char>());

        return n[0]-'0';

    }
};
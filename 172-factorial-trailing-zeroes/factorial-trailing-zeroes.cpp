class Solution {
public:
    int trailingZeroes(int n) {
        
        // Trailing zero concept in factorials;
        
        // let's say 100!
        // first- 100/5 - 20
        // 20/5 = 4 
        // total zero = 24

        int count =0;
        while(n>=5){
             n = n/5;
             count +=n;
        }
        return count;
    }
};
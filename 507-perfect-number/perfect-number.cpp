class Solution {
public:
    bool checkPerfectNumber(int num) {
        
        int divisor_sum=0;

        for(int i =1; i<num; i++){
             if(num%i==0) divisor_sum +=i;
        }
        if(num==divisor_sum) return true;
        return false;
    }
};
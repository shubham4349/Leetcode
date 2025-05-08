class Solution {
public:
    int countDigits(int num) {
        int val = num;

        int digit;
        int count = 0;
        while(num > 0){
            digit = num%10;
            if(val % digit ==0) count++;

            num /=10;
        }
        return count;
    }
};
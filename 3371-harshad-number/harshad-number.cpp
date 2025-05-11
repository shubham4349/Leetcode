class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        
        int num = x;
        int digit;
        int sum = 0;
        while(x>0){
            digit = x%10;
            sum += digit;
            x = x/10;
        }
        if(num%sum==0) return sum;
        return -1;
    }
};
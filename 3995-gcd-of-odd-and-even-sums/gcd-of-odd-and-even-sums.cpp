class Solution {
public:
    int gcdOfOddEvenSums(int n) {
         int cnt=0;
          int num=1;
          int evenSum=0,oddSum=0;
         while(cnt!=n*2){
            if(num%2==0){
                 evenSum+=num;
                 cnt++;
            }
            else{
                oddSum+=num;
                cnt++;
            }
            
            num++;
         }
         return __gcd(evenSum,oddSum);
    }
};
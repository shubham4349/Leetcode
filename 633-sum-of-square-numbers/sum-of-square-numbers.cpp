class Solution {

public:
    bool judgeSquareSum(int c) {
        
     // using binary search for optimization

      long long a = 0;
      long long b = sqrt(c); 
      // b ko uska sqrt isliye, cuz let's say 
      // c = 5
      // b = 2 
      // tum agar isko 3 kroge to 3*3-> 9 , c se hi exceed krjayega--> isliye sqrt(c) tak hi chalayenge.

      while(a<=b){
        long long sum = a*a + b*b;
        if(sum==c) return true;
         else  if(sum<c) a++; // 
        else b--;
      }
      return false;
    }
};
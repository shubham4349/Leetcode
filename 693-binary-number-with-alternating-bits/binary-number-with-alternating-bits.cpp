class Solution {
public:
    bool hasAlternatingBits(int n) {
        // concept
        // ex= 101010101....num1
        // after right shifting 1 , n>>1 
        //     010101010 ...num2
        // num1 xor num2 loge to ->111111
        // so agar alternating bits rhhega to uska right shit xor ke bad 1 aayega 
      //  so last me check kro agar all ones bacha then true
     long long y=n;
     long long x= y^(y>>1);

      if((x&(x+1))==0)return true;
      // and-> multiply 
      return false;

    }
};
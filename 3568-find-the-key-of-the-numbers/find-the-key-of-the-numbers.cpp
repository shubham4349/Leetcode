class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        
       string s1= to_string(num1);
       string s2= to_string(num2);
       string s3= to_string(num3);

       while(s1.length()<4) s1='0'+s1;
       while(s2.length()<4) s2='0'+s2;
       while(s3.length()<4) s3='0'+s3;

       string ans="0000";
       for(int i=0; i<4; i++){
          int a=s1[i]-'0';
          int b= s2[i]-'0';
          int c= s3[i]-'0';

          int minm=min({a,b,c});
          ans[i]='0'+minm;
       }
       return stoi(ans);
    }
};

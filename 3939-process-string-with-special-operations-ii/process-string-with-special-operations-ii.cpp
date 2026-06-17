class Solution {
public:
    char processStr(string s, long long k) {
         // string process krte krte exponentially large hojayega
         // so string ko create krne se memory limit exceed aaya
         long long l=0;
         for(auto& ch:s){
            if(ch=='*' and l>0) l--;
            else if(ch=='#') l*=2;
            else if(ch>='a' and ch<='z') l++;
            else continue; // % aane pe len me koi chnage nhi
         }
         if(k>=l) return '.';
         // eg= abc# , k=4
         //     final-> abcabc 
         // l=6, ka jo k=4 h, vo l=3 ka k=1 h,
         // (l,k) = (l/2, k-l/2)
         // so new k = k-l/2 , only if(k>=l)

         // ulta traverse kro
         // l aur k ko change krte rho, jaha pe, l==k return s[i]
         for(int i=s.size()-1; i>=0; i--){
              if(s[i]=='#'){
                  l=l/2;
                 if(k>=l){ 
                   k=k-l;
                 }
              } else if(s[i]=='%'){
                 k=l-k-1; 
                 // abcd = dbca 
                 // a=0 -> a=3 -> 4-3-1=0= a
              } else if(s[i]=='*') l++;
                else l--; // normal chara
              if(l==k) return s[i];
         }
         return '.';

    }
};
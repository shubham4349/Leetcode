#define pb push_back
class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
         
         int n=s.length();
       // if(n%3==0) continue;
         if(s.length()%k!=0){ // str ki len 10 types-> isko 12 krna hoga
            while(s.length()%k!=0){ // n%3==0
                s+=fill;
               //s+=fill;
                 //n= s.length();
            }
           
        }
        vector<string> ans;
        string str="";
        for(int i=0; i<s.length(); i++){
           str+=s[i];
           if(str.length()==k){
             ans.pb(str);
             str="";
           }
        }
        return ans;     
        
    }
};

/*
APPROACH 1:
 int i=0;
         while(n--){
              string str = "";
              while(str.length()!=3){
                  if(i<n){
                    str +=s[i];
                  i++;
                  }
              }
              if(str.length()==3) ans.pb(str);
         }
         return ans;
*/
/*

        //  vector<string> ans;
        //    string str ="";
        //  for(int i=0; i<n; i++){
        //      str+=s[i];

        //      if(str.length()==k) {
        //         ans.pb(str);
        //         str ="";
        //      }
        //      if(s[i]==s[n-1] and str.empty()!=0 ){
        //           while(str.length()!=k){
        //                //str +=s[n-1];
        //                str+=fill;
        //           }
        //           ans.pb(str);
        //      }
            //  if(n%3 == 1 and s[i]==s[n-1]){ // 10/3 - rem 1 mtlb isme 2 x add hoga
            //   //  str +=s[n-1];
            //     str+=fill;
            //     str+=fill;
            //     ans.pb(str);
            //  }
            //  if(n%3 == 2 and  s[i]==s[n-1]){
            //     str+=fill;
            //  }
         }
         return ans;
*/
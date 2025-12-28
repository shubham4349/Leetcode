class Solution {
public:
    string reverseStr(string s, int k) {
       int n=s.size();
       // har 2k pe k char rev kro
       // if remaining ch <2k but >k the rev k
       // if <k rev all
       string ans="";
    //    for(int i=0; i<n; i++){
    //       // int x=0;
    //        string ss="";
    //        while(ss.size()!=2*k){
    //           //if(x==k-1) 
    //           if(ss.size()==k) reverse(ss.begin(),ss.end());
    //           ss+=s[i];
    //           i++;
    //        }
    //        ans+=ss;
       for(int i=0; i<n; i+=2*k){
          string ss=s.substr(i,k);
          reverse(ss.begin(),ss.end());
          s.replace(i,k,ss); // idx-> i to k me ss
       }
       return s; 
    }
};
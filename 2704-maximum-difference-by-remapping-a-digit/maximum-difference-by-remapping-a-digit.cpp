class Solution {
public:
    int minMaxDifference(int num) {
       
       string s=to_string(num);
       string ss=to_string(num);
       
       // max ke liye
       // pehla digit dekh 9 h ki nhi, nhi h to uske sare occurence ko 9 kr
       // nhi to second digit ko pakad
       // yani 1st non-9 digit ke sare occur ko 9 kr

       char target=' ';
       for(int i=0; i<s.size(); i++){
           if(s[i]!='9'){
              target=s[i];
              break;
           }
       }
       for(int i=0; i<s.size(); i++){
           if(s[i]==target) s[i]='9';
       }
       // min ke liye pehla digit ke sare occur ko 0 kr
       char target2=ss[0];
       for(int i=0; i<ss.size(); i++){
          if(ss[i]==target2) ss[i]='0';
       }
       return stoi(s)-stoi(ss);
    }
};
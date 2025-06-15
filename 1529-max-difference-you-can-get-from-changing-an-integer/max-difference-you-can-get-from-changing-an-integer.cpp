class Solution {
public:
    int maxDiff(int num) {
        //x 
        //y
        // maxm ke liye 9 krdo , minm ke liye 1

        string s= to_string(num);
        string p= s;
     // maximize part
      char key1;
       for(int i=0; i<s.length(); i++){
            if(s[i]!='9') {
                key1 = s[i];
                break; // jaha pehla non 9 milgya break
            }
       }
        for(int i=0; i<s.length(); i++){
            if(s[i]==key1) {
                s[i]= '9';
              
            }
        }
        // minimize part
        char key2;
        if(p[0]!='1'){// agar p ka 0 me 1 ke equal nhi h to usko 1 banao
            key2= p[0];
            for(int i =0; i <p.length(); i++) {
                if(p[i]==key2) {
                    p[i]='1';
                }
            }
        }else{ // p ka 0 1 h, to next non 0 or 1 ko 0 banao
             for(int i= 1; i<p.length(); i++) {
                if(p[i]!='0' and p[i]!='1') {
                    key2=p[i]; // yani change isi ko krna h
                    break;
                }
             }
             for(int i=1; i<p.length(); i++){
                 if(p[i]==key2) {
                      p[i]='0';
                 }
             }
        }
        int a=stoi(s);
        int b= stoi(p);

        return a-b;

    }
};
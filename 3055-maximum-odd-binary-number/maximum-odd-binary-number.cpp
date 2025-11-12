class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        // pehle one count krle
        // string ki size save rkh
        // odd ke liye lsb me 1 rehna jaruri h--> bas yyhi imp tha
        int n=s.size();
        int cnt1=0;
        for(char ch:s){
            if(ch=='1') cnt1++;
        }
        string ans="";
        // for(int i=0; i<n; i++){
            int x=cnt1-1; // ek one last me add krne ke liye chora
            while(x--) ans+="1";
        // }
        int rem=n-ans.size();
        while(rem--) ans+="0";
        ans[ans.size()-1]='1';
        return ans;



    }
};
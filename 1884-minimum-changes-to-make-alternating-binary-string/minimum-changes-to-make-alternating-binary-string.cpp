class Solution {
public:
    int minOperations(string s) {
        // final str ya to 010101
        // ya 101010
        int n=s.size();
        // case 1: assume kiya final string 01 combo h
        // even idx pe 0
        int cnt01=0; 
        string temp01="";
        for(int i=0; i<n; i++){
            if(i%2==0) temp01+='0';
            else temp01+='1';
        }
        for(int i=0; i<n; i++){
              if(s[i]!=temp01[i]) cnt01++;
        }
        int cnt10=0;
         string temp10="";
        for(int i=0; i<n; i++){
            if(i%2==0) temp10+='1';
            else temp10+='0';
        }
        for(int i=0; i<n; i++){
              if(s[i]!=temp10[i]) cnt10++;
        }
        return min(cnt01,cnt10);


    }
};
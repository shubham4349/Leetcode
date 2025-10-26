class Solution {
public:
    long long removeZeros(long long n) {
        string num=to_string(n);
        string x="";
        for(char ch: num){
            if(ch!='0') x+=ch;
        }
        long long ans=stoll(x);
        return ans;
    }
};
#define ll long long
class Solution {
public:
    long long sumAndMultiply(int n) {
        ll x=0,sum=0;
        string sx="";
        if(n==0) return 0;
        string nx=to_string(n);
        for(auto& ch:nx){
            if(ch>'0'){
                sx+=ch;
                sum+=ch-'0';
            }
        }    
        x=stoll(sx);
        return sum*x;
    }
};
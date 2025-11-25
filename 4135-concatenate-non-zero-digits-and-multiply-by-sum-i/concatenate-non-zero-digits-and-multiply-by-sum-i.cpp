class Solution {
public:
    long long sumAndMultiply(int n) {
        string s="";
        // int len=0;
        long long sum=0;
        while(n>0){
            int digit=n%10;
            if(digit!=0){
                sum+=digit;
                s+=to_string(digit);
            }
            n=n/10;
        }
        if(s.empty()) return 0;
        reverse(s.begin(),s.end());
        long long ans=stoll(s);
        return ans*sum;
    }
};
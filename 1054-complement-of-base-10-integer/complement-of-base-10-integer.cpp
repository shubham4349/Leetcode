class Solution {
public:
    int bitwiseComplement(int n) {
        string deci="";
        if(n==0) return 1;
        while(n>0){
            int num=n%2;
            deci+=to_string(num);
            n=n/2;
        }
        reverse(deci.begin(),deci.end());

        for(char& ch:deci){ // flip
            if(ch=='0') ch='1';
            else ch='0';
        }
        int ans=0;
        int k=0;
        for(int i=deci.size()-1; i>=0;i--){
            int curr=(deci[i])-'0';
            ans+=pow(2,k)*curr;
            k++;  
        }
        return ans;

    }
};
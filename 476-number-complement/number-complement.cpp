class Solution {
public:
    int findComplement(int num) {
        string bin="";
        while(num>0){
           int digit=num%2;
           bin+=to_string(digit);
           num/=2;
        }
        // reverse(bin.begin(),bin.end());
        int ans=0;
        for(int i=0; i<bin.size(); i++){
              if(bin[i]=='0'){
                bin[i]='1';
              }else bin[i]='0';
              ans +=pow(2,i)*(bin[i]-'0');
        }
        return ans;
    }
};
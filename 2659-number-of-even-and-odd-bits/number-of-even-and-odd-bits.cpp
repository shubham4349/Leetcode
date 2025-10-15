class Solution {
public:
    vector<int> evenOddBit(int n) {
        string bin="";
        while(n>0){
            int digit=n%2;
            bin+=to_string(digit);
            n/=2;
        }
        int even=0,odd=0;
        for(int i=0; i<bin.size(); i++){
            if(bin[i]=='1'){
                if(i%2==0) even++;
                else odd++;
            } 
        }
        return {even,odd};
    }
};
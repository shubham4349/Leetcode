class Solution {
public:
    int minimumFlips(int n) {
        string bin="";
        while(n>0){
           bin+=to_string(n%2);
           n=n/2;
        }
        int cnt=0;
        string orig=bin;
        reverse(bin.begin(),bin.end());
        for(int i=0; i<bin.size(); i++){
            if(bin[i]!=orig[i]) cnt++;
        }
        return cnt;
    }
};
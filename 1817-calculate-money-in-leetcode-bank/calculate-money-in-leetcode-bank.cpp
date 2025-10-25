class Solution {
public:
    int totalMoney(int n) {
        int sum=0;
        int dollar=1;
        int start=1;
        for(int i=1; i<=n; i++){
             sum+=dollar;
             dollar++;
             if(i%7==0){
                dollar=start+1;
                start++; 
             } 
        }
        return sum;
    }
};
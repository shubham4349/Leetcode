class Solution {
public:
   
    bool isThree(int n) {
        
        if(n<=3) return false;
        int cnt=0;
        for(int i=1; i<=n; i++){
             if(n%i==0) cnt++;
        }
        return cnt==3;
    }
};
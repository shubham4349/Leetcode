#define pb push_back
class Solution {
public:
    bool nonZeroInt(int n){
         while(n>0){
            int digit=n%10;
            if(digit==0) return false;
            n=n/10;
         }
         return true;
    }
    vector<int> getNoZeroIntegers(int n) {   
       // vector<int> ans;
        for(int i=1; i<n; i++){
             if(nonZeroInt(i) and nonZeroInt(n-i)) return {i,n-i};
        }
         return {-1,-1};
    }
};
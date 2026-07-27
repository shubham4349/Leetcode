class Solution {
public:
    int largestInteger(int n, int s) {
         if(s>9*n) return -1; // ye sum n digits se nhi aa payega
         int rem_sum=s; // remaining sum
         int ans=0;
         for(int i=0; i<n; i++){
             int digit=min(9,rem_sum);
             rem_sum-=digit;
             ans=ans*10+digit;
         }
         return ans;
        
    }
};
class Solution {
public:
    vector<int> countBits(int n) {
        
      // 1- 1               2-10
      // 3- 011             4 -100
      // 5 - 101            6- 110
      // 7 = 111            8 - 1000
      // 9 = 1001           10- 1010

      // if n is even 
      // no of 1 in n = no of 1 in n/2
      // n = 6 , same as 6/2 = 3

      // if n is odd
      // no of 1 in n = no of n in n/2 +1
      // n=7 , n/2 = 3 , 3 me 2 one h, ans- 2 + one = 3 , whch is correct
    
     vector<int> ans(n+1,0);
     ans[0] = 0;
    // ans[1] = 1;
      for(int i =0; i<n+1; i++){

        if(i%2!=0) {
            ans[i] = ans[i/2] +1;
        }
        else ans[i] = ans[i/2]; 
      }
      return ans;
    }
};
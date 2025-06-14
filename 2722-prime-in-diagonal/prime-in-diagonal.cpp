class Solution {
public:
    bool isPrime(int n){

        if(n==1) return false;
        for(int i=2; i*i<=n; i++){
            if(n%i ==0) return false;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        
        int r=nums.size();
        int c= nums[0].size();
        
        vector<int> ans;
         // traversing rigith diagonal
        int a=0;
         for(int b=0; b<r; b++){
             ans.push_back(nums[a][b]);
             a++;
         }
         // traversing left diagonal
         int x=0;
         for(int y=c-1; y>=0; y--){
             ans.push_back(nums[x][y]);
             x++;
         }
         set<int> hello(ans.begin(), ans.end());
         ans.assign(hello.begin(), hello.end());

         int maxm=INT_MIN;
         for(int i=0; i<ans.size(); i++){
            if(isPrime(ans[i])) {
                maxm = max(ans[i], maxm);
            }
         } 
         if(maxm==INT_MIN) return 0;
         return maxm;
         
    }
};
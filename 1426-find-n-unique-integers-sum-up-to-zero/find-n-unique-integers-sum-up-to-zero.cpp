class Solution {
public:
    vector<int> sumZero(int n) {
        // n=5 -> 1,-1,3,-3,0
        // n=4=-> 1,-1,3,-3
        if(n==1) return {0};
        // even h to bas n/2 unique no, then uska negative
        // odd h to n-1/2 negattive num then uska negative then,0

        vector<int> ans;
        int orig=0;
        if(n%2==1) orig=n-1;
        else orig=n;

        int x=orig/2; 
        orig=orig/2;
        while(x--){
           ans.push_back(orig);
           ans.push_back(-orig);
           orig--;
        }
        if(ans.size()!=n) ans.push_back(0);
        return ans;
    }
};
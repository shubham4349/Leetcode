class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        // maxm rowsum find kr
        int r=accounts.size();
        int maxm=INT_MIN;
        for(int i=0; i<r; i++){
            int sum=accumulate(accounts[i].begin(),accounts[i].end(),0);
            maxm=max(maxm,sum);
        }
        return maxm;
    }
};
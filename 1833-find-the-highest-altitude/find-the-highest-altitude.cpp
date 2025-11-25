class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int> alti(n+1,0);
        alti[1]=gain[0];
        for(int i=1; i<gain.size(); i++){
              alti[i+1]=alti[i]+gain[i];
        }
        int ans=*max_element(alti.begin(),alti.end());
        return ans;
    }
};
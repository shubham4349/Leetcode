class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        int n=bulbs.size();
        vector<int> ans; // on bulbs
        vector<int> bulbsList(101,0); // 0 mane off h abhi
        for(int i=0; i<n; i++){
            int x=bulbs[i];
            if(bulbsList[x]==0) bulbsList[x]=1; // off h to on krde
            else bulbsList[x]=0; 
        }
        for(int i=1; i<=100; i++){
            if(bulbsList[i]==1) ans.push_back(i);
        }
        sort(ans.begin(),end(ans));
        return ans;
    }
};
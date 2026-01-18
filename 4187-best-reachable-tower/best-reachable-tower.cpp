class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        // reachable-> agar dist from center <=radius
        int maxm=INT_MIN;
        for(auto& t:towers){
            int x1=t[0];
            int y1=t[1];
            int dist=abs(x1-center[0])+abs(y1-center[1]);
            if(dist<=radius){
                maxm=max(maxm,t[2]);
            }
        }
        vector<pair<int,int>> vp;
        for(auto& t:towers){
            if(t[2]==maxm){
                vp.push_back({t[0],t[1]});
            }
        }
        sort(vp.begin(),vp.end());
        if(!vp.empty()) return {vp[0].first,vp[0].second};
        return {-1,-1};
    }
};
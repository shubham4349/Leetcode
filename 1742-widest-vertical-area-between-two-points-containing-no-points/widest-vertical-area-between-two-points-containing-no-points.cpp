class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
    //    int r=points.size();
    //    int c=points[0].size();

        // area is given by diff in x coordi
        // mthb 1
        vector<int> ans;
        for(auto &v:points){
            ans.push_back(v[0]);
        }
        sort(ans.begin(),ans.end());
        int maxDiff=0;
        for(int i=0; i<=ans.size()-2; i++){
            int diff=ans[i+1]-ans[i];
            maxDiff=max(maxDiff,diff);
        }
        return maxDiff;

    }
};
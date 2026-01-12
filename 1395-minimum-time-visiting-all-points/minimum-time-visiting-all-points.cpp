class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int r=points.size();
        int c=points[0].size();
        int dist=0;
        // ek bar me maxm dist travel krne pe overall time minm aayega
        for(int i=0;i<r-1; i++){
            int x1=points[i][0];
            int y1=points[i][1];
            int x2=points[i+1][0];
            int y2=points[i+1][1];
            dist+=max(abs(x2-x1),abs(y2-y1));
        }
        return dist;
    }
};
class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        // concept->
        // for a point to be inside a circle dist bw it and circle 
        // centr shud be<=radius -> ek query ke liye sare points check kro

        // dist-> For two points in 2D space (x1, y1) and (x2, y2)
        // sqrt(x2-x1 ka square + y2-y1 ka square)
        
        vector<int> vec;
        for(auto &q:queries){
            int x1=q[0];
            int y1=q[1];
            int r=q[2];
            int cnt=0;
            for(auto &p:points){
                int x2=p[0];
                int y2=p[1];
                int x_dist=x2-x1; // dx
                int y_dist=y2-y1; // dy
                double dist=sqrt(x_dist*x_dist+y_dist*y_dist);
                if(dist<=r) cnt++;
            }
            vec.push_back(cnt);
        }
        return vec;
    }
};
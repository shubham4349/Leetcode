class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
         
         // ye global check kr rhi
        //  vector<int> row,col;
        //  for(auto &v: buildings){
        //     row.push_back(v[0]);
        //     col.push_back(v[1]);
        //  }
        //  int maxmR=*max_element(row.begin(),row.end());
        //  int minmR=*min_element(row.begin(),row.end());
        //  int maxmC=*max_element(col.begin(),col.end());
        //  int minmC=*min_element(col.begin(),col.end());

        // har row and col ke min and max store kro
        vector<int> minRow(n+1,INT_MAX), maxRow(n+1,INT_MIN);
        vector<int> minCol(n+1,INT_MAX), maxCol(n+1,INT_MIN);

        for(auto &v: buildings){
            int x=v[0];
            int y=v[1];

            // row-> x axis change, y same
            maxRow[y]=max(maxRow[y],x); // is col ka maxm x pata chal gya
            minRow[y]=min(minRow[y],x);
            // col-> x same y change
            maxCol[x]=max(maxCol[x],y);
            minCol[x]=min(minCol[x],y);
        } 
        int cnt=0;
          for(auto &v: buildings){
            int x=v[0];
            int y=v[1];
           if(x>minRow[y] and x<maxRow[y] and y>minCol[x] and y<maxCol[x])cnt++;
        }
         return cnt;
    }
};
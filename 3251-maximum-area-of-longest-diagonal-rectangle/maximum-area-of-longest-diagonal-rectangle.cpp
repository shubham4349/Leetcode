class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        
    //    int l1= dimensions[0][0];
    //    int b1= dimensions[0][1];
    //    int l2= dimensions[1][0];
    //    int b2= dimensions[1][1];

    //    int diag1=sqrt(l1*l1+b1*b1); // diagonal tera hypotenuse h, so used pythagorus
    //    int diag2= sqrt(l2*l2+b2*b2);

    //    if(diag1>diag2) return l1*b1;
    //    else return l2*b2;

        int n=dimensions.size();
        int m=dimensions[0].size();
        double maxDiag=0;
        int maxmArea=0;
        for(int i=0; i<n; i++){
            // for(int j=0; j<m; j++){
                int len=dimensions[i][0];
                int bre= dimensions[i][1];
                double diag= sqrt(len*len+bre*bre);
                maxDiag=max(maxDiag,diag);
            // }
        }
        for(int i=0; i<n; i++){
                int len=dimensions[i][0];
                int bre= dimensions[i][1];
                double diag= sqrt(len*len+bre*bre);
               
                if(diag==maxDiag){
                     int area=len*bre;
                    maxmArea= max(maxmArea,area);
                }
        }
        return maxmArea;

    }
};
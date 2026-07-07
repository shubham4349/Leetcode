class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        // ek interval ko utha, aur sbse compare kr
        // agar vo kisi brackey me aa rha to use -1 krde
        // sbko aise hi kr

        int n=intervals.size();
        int temp=n;
        for(int i=0; i<n; i++){
            int a=intervals[i][0];
            int b=intervals[i][1];

            for(int j=0; j<n; j++){
                 if(i!=j){
                    int c=intervals[j][0];
                    int d=intervals[j][1];

                    if(c<=a and d>=b){
                        temp--; // jab koi bracket kisi ke under aaya
                        // size 1 ghato aur break kro, fir next brkt similarly compare kr
                        break;
                    }
              }
            }
        }
        return temp;
    }
};
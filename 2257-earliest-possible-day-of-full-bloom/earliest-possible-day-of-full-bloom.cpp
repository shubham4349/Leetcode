class Solution {
public:
   static bool cmp(vector<int>& a, vector<int>& b){
        return a[1] > b[1];
    }
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        // example testcae: 
        // pt- 1,1
        // gt- 1,2
        // plant the plant with maxm grow time

        int n=plantTime.size();
        vector<vector<int>> hello;
        for(int i=0; i<n; i++){
            //  hello[i][0]= plantTime[i];
            //  hello[i][1]= growTime[i];
           hello.push_back({plantTime[i], growTime[i]});
        
        }
        sort(hello.begin(), hello.end(), cmp);

        int prev=0;
        int maxm=0;
        int sum=0;
        for(int i=0; i<n; i++ ){
           sum=prev+hello[i][0]+hello[i][1]; // pehla wala palnt time +  plant time + grow time
           maxm= max(maxm, sum);
           prev +=hello[i][0]; // phele ka plant time
        }
        return maxm;
    }
};
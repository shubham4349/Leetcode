class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        
        int n=tasks.size();
      //  int m= tasks[0].size(); 
        
        int earliest=INT_MAX;
        for(int i=0; i<n; i++){
            int start=tasks[i][0];
            int finish=tasks[i][1];
            int total= start+finish;
            earliest=min(earliest,total);
        }
        return earliest;
    }
};
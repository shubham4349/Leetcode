class Solution {
public:
    void swap(vector<int>& a, vector<int>& b){
         vector<int> temp=a;
         a=b;
         b=temp;
    }
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int m=score.size();
        int n=score[0].size();
        // u can use-> comparator, any other sorting algo, using pairs
        // using bubble sort
        for(int i=0; i<m-1; i++){
           for(int j=0; j<m-i-1; j++){
              if(score[j][k]<score[j+1][k]){
                    swap(score[j],score[j+1]);
                }
           }
        }
        return score;
    }
};
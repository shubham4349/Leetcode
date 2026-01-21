class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        // check kr queries ke konse words h jinka char diff cnt<=2 h from the dict
        // brute
        int n=queries.size();
        int m=dictionary.size();
        int x=queries[0].size(); // dict[0] bhi same h
        vector<string> ans;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                // word.length
                int cnt=0;
                for(int k=0; k<x; k++){
                    if(queries[i][k]!=dictionary[j][k]){
                        cnt++;
                        if(cnt>2) break; // j badhao
                    }

                }
                if(cnt<=2){
                    ans.push_back(queries[i]);
                    break; // yani i badhao
                }
            }
        }
        return ans;
        
    }
};
class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        // method 2-> using pairs
        // pair me sorting pehle key ke basis pe hoti h= p<k,v>
        // agar key same ho then value

        int n=score.size();
        vector<pair<int,int>> nums;

        for(int i=0; i<n; i++){
            nums.push_back({-score[i][k],i}); // -krne se descending sort hojayega
        }
        sort(nums.begin(),nums.end());
        // nums sorted h
        vector<vector<int>> ans;
        for(auto &[key,val]:nums){
            ans.push_back(score[val]);
        }
        return ans;
    }
};
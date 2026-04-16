class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        // cnt number of 1 in each row
        // thatll be num of vertex
        vector<int> ans;
        for(auto& row:matrix){
            int cnt=0;
            for(auto& val:row){
                if(val==1) cnt++;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};
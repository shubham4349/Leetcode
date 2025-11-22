class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n=names.size();
         // pair me sorting pehle key ke basis pe hoti h= p<k,v>
        // agar key same ho then value
        // similiar to 2545
        vector<pair<int,string>> nums;
        for(int i=0; i<n; i++){
            nums.push_back({-heights[i],names[i]});
        }
        sort(nums.begin(),nums.end());
        vector<string> ans;
        for(auto &[key,val]:nums){
            ans.push_back(val);
        }
        return ans;
    }
};
#define all(v) (v).begin(),(v).end()
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(all(arr));
        int min_diff=INT_MAX;
        // sare pair khojo kinka diff== min_diff
        for(int i=1; i<arr.size(); i++){
             min_diff=min(min_diff,arr[i]-arr[i-1]); // finding min_diff
        }
        vector<vector<int>> ans;
        for(int i=1; i<arr.size(); i++){
             if(arr[i]-arr[i-1]==min_diff) ans.push_back({arr[i-1],arr[i]});
        }
        return ans;
    }
};
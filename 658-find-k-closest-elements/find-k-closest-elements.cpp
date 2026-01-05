class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        vector<pair<int,int>> vp;
        for(int i=0; i<n; i++){
              vp.push_back({abs(arr[i]-x),arr[i]});
        } 
        sort(vp.begin(),vp.end());
        vector<int> ans;
        for(int i=0; i<k; i++){
            ans.push_back(vp[i].second);
        }
        sort(begin(ans),end(ans));
        return ans;
    }
};
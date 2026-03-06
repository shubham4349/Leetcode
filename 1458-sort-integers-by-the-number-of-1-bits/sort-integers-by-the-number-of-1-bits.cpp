class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {

       int n=arr.size();
     // cnt 1 bits in nmber

       vector<pair<int,int>> vp;  
       for(int i=0; i<n; i++){
         vp.push_back({__builtin_popcount(arr[i]),arr[i]});
       }      
       sort(vp.begin(),vp.end());
       vector<int> ans;
       for(auto &v:vp){
         ans.push_back(v.second);
       }
       return ans;
    }
};
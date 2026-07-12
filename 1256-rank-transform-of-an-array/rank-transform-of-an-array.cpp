class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        vector<int> copy= arr; 
        sort(copy.begin(),copy.end());
        map<int,int> mp;
        int cnt=1;
        for(int i=0; i<n; i++){
           if(mp.find(copy[i])==mp.end()){
               mp[copy[i]]=cnt;
               cnt++;
           }
        }
        for(int i=0; i<n; i++){
           copy[i]=mp[arr[i]];
        }
        return copy;

    }
};
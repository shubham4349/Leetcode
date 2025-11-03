class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        map<int,int> mp;
        for(int num:arr){
            mp[num]++;
        }
        int cnt=0;
        set<int> st;
        for(auto &[key,val]:mp){
            cnt++;
            st.insert(val);
        }
        return cnt==st.size();

       
    }
};
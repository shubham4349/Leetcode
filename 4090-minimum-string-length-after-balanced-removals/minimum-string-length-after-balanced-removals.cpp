class Solution {
public:
    int minLengthAfterRemovals(string s) {
        map<char,int> mp;
        for(char& ch:s) mp[ch]++;
        int cnt_a=0,cnt_b=0;
        for(auto& [ch,cnt]:mp){
           if(ch=='a') cnt_a=cnt;
           else cnt_b=cnt;
        }
        return abs(cnt_a-cnt_b);
    }
};
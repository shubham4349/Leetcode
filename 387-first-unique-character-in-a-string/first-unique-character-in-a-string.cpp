class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.length();
        unordered_map<char,int> count;
        for(auto ch: s){
            count[ch]++;
        }
        int ans=-1;
        for(int i=0; i<n; i++){
            if(count[s[i]]==1) {
                ans = i;
                break;
            }
        }
        return ans;

    }
};
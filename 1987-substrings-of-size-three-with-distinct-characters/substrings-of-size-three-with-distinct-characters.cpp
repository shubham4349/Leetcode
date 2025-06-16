class Solution {
public:
    int countGoodSubstrings(string s) {
        // size3
        // distinct char
        int n=s.length();
        int cnt=0;
        for(int i=0; i<n-2; i++){
             unordered_set<int> hello;
            for(int j=i; j<i+3; j++){
                hello.insert(s[j]);
                if(hello.size()==3) cnt++;
            }
             hello.clear();
        }
        return cnt;
    }
};
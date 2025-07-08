class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> count;
        for(char ch: s){
            count[ch]++;
        }
        sort(s.begin(), s.end(), [&](char a,char b){
              if(count[a]==count[b]) return a>b;
              return count[a]>count[b]; // jiski freq jyda h vo aage
        });
        return s;
    }
    // go to 1636-
};
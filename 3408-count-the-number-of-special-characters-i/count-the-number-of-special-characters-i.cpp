class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n= word.length();
        unordered_map<char,int> map;

        for(int i=0; i<n; i++){
            map[word[i]]++;
        }
        int cnt=0;
        for(char ch= 'a' ; ch<='z'; ch++){
            if(map.count(ch) and map.count(toupper(ch))) cnt++;
        }
        return cnt;
    }
};
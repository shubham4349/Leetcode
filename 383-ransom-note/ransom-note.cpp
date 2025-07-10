class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n=ransomNote.size();
        int m=magazine.size();
        // for(int i=0; i<m; i++){
        //     if(magazine.substr(i,n)==ransomNote) return true;
        // }
        // return false;
        map<int,int> ransom;
        map<int,int> maga;

        for(auto ch: ransomNote) ransom[ch]++;
        for(auto cho: magazine) maga[cho]++;
        for(auto i: ransomNote){
            if(ransom[i]>maga[i]) return false;
        }
        return true;
    }
};
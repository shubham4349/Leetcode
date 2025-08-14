class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        
        int n=s.length();

        int k=words.size();
        int count=0;
        for(int i=0; i<k; i++){
            int check=0;
            if(words[i].size()<=n){
                for(int j=0; j<words[i].size(); j++){
                    string str=words[i];
                // if(words[i].size()>)
                    if(str[j]==s[j]) check++;
                }
                if(check
                ==words[i].size()) count++;
            }
           
        }
        return count;
    }
};
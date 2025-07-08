class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int n=words.size();
        unordered_map<char,int> count;
        for(char s: chars) {
            count[s]++;
        }
        int ans=0;
        unordered_map<char,int> freq;
        for(int i=0; i<n; i++){
            for(char k: words[i]) {
               freq[k]++;  
            }
            int cnt=0; 
            // agar cat ke sare char ka freq chars ke count se <= h to inlcude it
             for(char k: words[i]) {
               if(freq[k]<=count[k]) cnt++;   
            }
            if(cnt==words[i].size()) ans+= words[i].size(); 
            freq.clear();
         }
         return ans;
    }
};
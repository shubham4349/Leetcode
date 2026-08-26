class Solution {
public:
    int minSteps(string s, string t) {
        
        // unordered_map<char,int> cnt_s;
        // for(auto& ch:s) cnt_s[ch]++;

        //  unordered_map<char,int> cnt_t;
        //  for(auto& ch:t) cnt_t[ch]++;

        //  int ans=0;
        //  for(auto& [ch,cnt]:cnt_s){
        //       if(cnt>cnt_t[ch]){
        //          // agar kisi char ki freq in s > t
        //          // to t me diff steps lagenge s ka perm bananae me
        //          ans+= cnt-cnt_t[ch]; // diff
        //       }
        //  }
        //  return ans; 

        // mthod 2- using vectors

        vector<int> freqs(26,0);
        for(char& ch:s){
            freqs[ch-'a']++; 
        }
        vector<int> freqt(26,0);
        for(char& ch:t){
            freqt[ch-'a']++; 
        }
        int ans=0;
        for(int i=0; i<26; i++){
            if(freqs[i]>freqt[i]){
                ans+=freqs[i]-freqt[i];
            }
        }
        return ans;
        





    }
};
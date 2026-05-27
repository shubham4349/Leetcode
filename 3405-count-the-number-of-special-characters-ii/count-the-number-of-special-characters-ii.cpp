class Solution {
public:
    bool idxCondn(auto& ch, string& word){
        int n=word.size();
         // last lowercae ka idx< first uppercase ke
         int idx1=0; // last occurece of ch
         for(int i=0; i<n; i++){
            if(word[i]==ch) idx1=i;
         }
         int idx2=0; // first occurence of uppercase(ch)
         for(int i=0; i<n; i++){
            if(word[i]==toupper(ch)){
                idx2=i;
                break;
            }
         }
         if(idx1<idx2) return true;
         return false;
    }
    int numberOfSpecialChars(string word) {
        int n= word.size();
       
        int cnt=0;
        set<char> st(word.begin(),word.end());
        for(auto& ch:st){
            if(ch>='a' and ch<='z'){
                if(st.find(toupper(ch))!=st.end()){ // lower upper dono h to
                    if(idxCondn(ch,word)) cnt++;
                }
            }    
        }
        return cnt;
    }
};

 

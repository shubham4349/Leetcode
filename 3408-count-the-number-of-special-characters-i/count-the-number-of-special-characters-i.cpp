class Solution {
public:
    int numberOfSpecialChars(string word) {
        // method 3-> using only vectors

        int n= word.length();
      //  vector<int> lower(27,0); // 0-> 27 , sabme 0
        // jaha char  milega less say b=2 o lower[2]=1;
        vector<int> upper(27,0);
        for(char ch:word){
             if(ch>='A' and ch<='Z'){
                int idx=ch-'A'; // B-A = 1, hm isme +1 krke B=2 banate h
                idx+=1; 
                upper[idx]=1;
             }
        }
        // set<char> seen;
        int cnt=0;
        for(int i=0; i<n; i++){
            if(word[i]>='a' and word[i]<='z') {
                    int idx=word[i]-'a';
                    idx++; // a-a=0 to hm usko a=1 banane ke liye +1 kiye
                    if(upper[idx]==1){
                        cnt++;
                        upper[idx]=0; // ek lower case ke liye ek hi bar cnt kr lwde
                    } 
            }
        }
        return cnt;
    }
};
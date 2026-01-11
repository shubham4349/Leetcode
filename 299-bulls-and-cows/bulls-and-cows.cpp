class Solution {
public:
    bool find(char ch, string &guess){
         for(char &chu:guess){
             if(chu==ch){
                chu='X';
                return true;
             }
         }
         return false;

    }
    string getHint(string secret, string guess) {
        int n=secret.size();
        int bullCnt=0;
        for(int i=0; i<n; i++){
            if(secret[i]==guess[i]){
                bullCnt++;
                secret[i]='X';
                guess[i]='X';
            }
        }
        string ans=to_string(bullCnt);
         ans+='A';
        // cow-> vo digit jo secret me h but wrong posn pe
        // if(guess[i]!=secret[i] and guess[i] agar secret me h)
        int cowCnt=0;
        for(int i=0; i<n; i++){
            if(secret[i]!=guess[i]){// ignoring bull
                if(find(secret[i],guess)) cowCnt++;
            }
        }
        ans+=to_string(cowCnt);
        ans+='B';
        return ans;
    }
};
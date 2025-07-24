class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
       
        int maxcount=0;
        for(string sentence : sentences){
             int cnt=1;
            for(char  ch : sentence){
                if(ch==' ') {
                    cnt++;    
                }  
            }
             maxcount=max(maxcount,cnt);
        }
        return maxcount;
    }
};
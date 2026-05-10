class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int n=events.size();
        int score=0,counter=0;
        // w= cnt++
        // wd,nb= scre++
        // cnter==10 stop

        for(string &s:events){
           if(counter==10){
               break;
           } else{
              if(isdigit(s[0])){
                score+=(s[0]-'0'); 
            } else{
                if(s=="W") counter++;
                else score++;
            }
           }
        }
        return {score,counter};
    }
};
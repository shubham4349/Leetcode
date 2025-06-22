class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        
        int n=tokens.size();
         // CONCEPT: GOOGLE
        //  WE can do two things: 

        //  1. if power>= token[i]; // (power gawakar score increase)
        //        power -= token[i];
        //        score++;

        //  2. if score>=1         // (score gawakar power++)
        //        power +=token[i];
        //        score--;
        
       // if(score<1 and power<tokens[0]) return 0;  // score iss case me increase hi nhi ho pata

        // jab score increase krna h to sabse chote tokeni se power ko ghatao, taki power bacha rhe taki further score++ ho sake.

        // aur jab score gawakr power ++ kr rhe ho to highest tokeni choose kro taki power++ ho.

        sort(tokens.begin(),tokens.end());

        int i=0;
        int j=n-1;
        int score=0;
        int maxscore=0;

        while(i<=j){
            if(power>=tokens[i]){ // case:1
                power -=tokens[i];
                score++;
                 i++;
                maxscore=max(maxscore,score);
            }else if(score>=1){ // case:2
                power += tokens[j];
                score--;
                j--;
               // maxscore=max(maxscore,score);
            }else return maxscore;
        }
        return maxscore;

    }
};
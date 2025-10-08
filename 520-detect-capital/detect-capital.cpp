class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.size()==1) return true;
       // string firstCap="";
        string firstCap=word;
        firstCap[0]=toupper(word[0]);
        for(int i=1; i<word.size(); i++){
            firstCap[i]=tolower(word[i]);
        }
        string cap="";
        string low="";
        for(char ch: word){
             cap+=toupper(ch);
             low+=tolower(ch);
        }
        if(word==cap) return true; // pura capital
        else if(word==low) return true;// pira low h
        else if(word==firstCap) return true;
        
        return false;

        
    }
};
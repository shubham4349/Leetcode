class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        // sabko morse me krke ek set me dal
        // then return set's size

        set<string> st;
        // string morse=".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..";
        // morse[0]=a;
        // map<char,string> mp;
        // mp={'a':".-", 'b':"-...", 'c':"-.-.", 'd':"-..", 'e':".", 'f':"..-.", 'g':"--.", 'h':"....", 'i':"..", 'j':".---", 'k':"-.-", 'l':".-..", 'm':"--", 'n':"-.", 'o':"---", 'p':".--.", 'q':"--.-", 'r':".-.", 's':"...", 't':"-", 'u':"..-", 'v':"...-", 'w':".--", 'x':"-..-", 'y':"-.--", 'z':"--.."};
       vector<string> morse;
       morse={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
       // morse[0]=a;
       string alphabet="abcdefghijklmnopqrstuvwxyz";
       map<char,string> mp;
       for(int i=0; i<alphabet.size(); i++){
         mp.insert({alphabet[i],morse[i]});
       }
       for(auto &s:words){
        string encoding="";
          for(auto &ch:s){
              encoding+=mp[ch];
          }
          st.insert(encoding);
       }
       return st.size();


    }
};
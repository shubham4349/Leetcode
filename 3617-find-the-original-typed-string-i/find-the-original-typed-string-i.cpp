class Solution {
public:
    int possibleStringCount(string word) {
        
        // unordered_map<char,int> count;

        // for(char ch : word){
        //     count[ch]++;
        // }
        // int possibility=1 ; // original string is always a possi coz maybe Alice ne key na press ki ho
        //  for(auto it : count){
        //     if(it.second > 1) {
        //         possibility += (it.second-1); // let's sayy 4 bar c h to 3 baar possiblity bani h key press krne ki, but 1 c to rhega hi 
        //     }
        // }
        // return possibility;
        int n= word.length();
        int possi=1;

        for(int i=0; i<n-1; i++){
           if(word[i]==word[i+1]){
               possi++;
           }
        }
        return possi;

    }
};
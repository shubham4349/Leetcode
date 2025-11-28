class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";

        // string one,two; 
        // if(words1.size()>word2.size()){
        //     one=word2; // chota
        //     two=word1;
        // }else{
        //     one=word1;
        //     two=word2; 
        // }
        int n=word1.size();
        int m=word2.size();
        int i=0;
        int j=0;
        while(i<n and j<m){
           ans+=word1[i];
           ans+=word2[j];
           i++;
           j++;
        }
        // remaining ke liye
        while(i<n){
            ans+=word1[i];
            i++;
        }
        while(j<m){
            ans+=word2[j];
            j++;
        }

       return ans;

    }
};
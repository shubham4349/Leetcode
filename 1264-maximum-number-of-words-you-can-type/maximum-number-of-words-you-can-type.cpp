class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        
    //     int spaceIdx=text.find(' ');
        int n=text.length();
    //     vector<char>word1(spaceIdx,0);
    //     vector<char>word2(n-spaceIdx+1,0);
        
    //     for(int i=0;i<spaceIdx; i++){
    //         word1[i]=text[i];
    //     }
    //     for(int i=spaceIdx+1;i<n; i++){
    //         word2[i]=text[i];
    //     }
        
    //     // int spaceIdx=text.find(' ');
    //     // string first=text.substr(0,spaceIdx);
    //     // string second()
    //     set<char> set1(brokenLetters.begin(), brokenLetters.end());
       
    //     int count1=0,count2=0,wordcount=0;
    //     for(char ch: word1){
    //         if(set1.find(ch)!=set1.end()){
    //              // jo char h word1 me vo broken me h
    //              count1=0;
    //         }
    //        else  count1++;
    //     }
    //     if(count1==word1.size()) wordcount++;

    //     for(char ch: word2){
    //         if(set1.find(ch)!=set1.end()){
    //              count2=0;
    //         }
    //        else  count2++;
    //     }
    //     if(count2==word1.size()) wordcount++;

    //    return wordcount;

       set<char> broken(brokenLetters.begin(), brokenLetters.end());
       int wordcount=0;
       bool check=true; // assume kiya pehla word accepted h
      // char ch=text[0];
      
       for(int i=0; i<=n; i++){
         char ch=text[i];
          if(ch==' ' or i==n){
             if(check) wordcount++;
             check=true;
          }
          else if(broken.count(ch)){
            check=false;
          }
           
       }

       return wordcount;
    }
};
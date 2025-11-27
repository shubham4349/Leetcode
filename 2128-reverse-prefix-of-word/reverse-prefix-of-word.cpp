class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n=word.size();
        int x=0;
        while(x<word.size() and word[x]!=ch){
            x++;
        }
        if(x==n) return word;
        // int idx=x; 
        int i=0;
        int j=x; // vo index milgya jaha tk rev krna h
        while(i<=j){
            char temp=word[i];
            word[i]=word[j];
            word[j]=temp;
            i++;
            j--;
        }
        return word;

    }
};
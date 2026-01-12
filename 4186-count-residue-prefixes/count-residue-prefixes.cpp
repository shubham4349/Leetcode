class Solution {
public:
    int residuePrefixes(string s) {
        string pre="";
        set<char> st;
        int residue=0;
         for(char &ch:s){
             pre+=ch;
             st.insert(ch);
             if(st.size()==pre.length()%3) residue++;
         }
         return residue;

    }
};
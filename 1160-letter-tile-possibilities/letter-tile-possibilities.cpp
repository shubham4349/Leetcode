class Solution {
public:
    int numTilePossibilities(string tiles) {
         sort(tiles.begin(), tiles.end());
        unordered_set<string> st;

        do {
            for(int len= 1;len<=tiles.size(); len++) {
                st.insert(tiles.substr(0,len));
            }
        } while(next_permutation(tiles.begin(),tiles.end()));
        return st.size();

        // dekho code kese work rk rha-> 
        // pehle str h->AAB 
        // set me pehe jayea A->AA->AAB
        // after next_perm
        // Tiles becomes
        // ABA->> A->AB->ABA
        // BAA-> B->BA->BAA
        // jese sort() string sort krna h vese, next_perm string ko next perm me bana deta h--> AAB->ABA, so now str is ABA mtlb uspe kam hoga
    }
};
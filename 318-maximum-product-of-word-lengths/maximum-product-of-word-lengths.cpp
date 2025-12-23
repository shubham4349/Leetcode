class Solution {
public:
    bool different(string &a, string &b){
        int x=a.size(),y=b.size();
        // TLE-from SETS
    //    unordered_set<char> aSet(a.begin(),a.end());
    //     for(char &ch:b){
    // // agar meko b me koi aisa char milgya jo aSet me h then return false     
    //         if(aSet.find(ch)!=aSet.end()) return false;
    //     }
    //   unordered_set<char> bSet(b.begin(),b.end());
    //     for(char &ch:a){
    //         if(bSet.find(ch)!=bSet.end()) return false;
    //     }
    //     return true;

        vector<int> av(26,0);
        for(int i=0; i<x; i++){
            av[a[i]-'a']=1;
        }
        for(int i=0; i<y; i++){
            if(av[b[i]-'a']==1) return false; // kyuki ye char a me tha
        }
        return true;

    }
    int maxProduct(vector<string>& words) {
        int maxPro=0;
        int n=words.size();

        for(int i=0; i<n; i++){
            int pro=0;
           for(int j=i+1; j<n; j++){
             if(different(words[i],words[j])){ // agar dono me similar char na ho
                    pro=words[i].length()*words[j].length();
                }
                maxPro=max(maxPro,pro);
            }
        }
        return maxPro;
    }
};
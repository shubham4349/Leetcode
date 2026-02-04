class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
         int n=s1.size(),n2=s2.size();
         // agar s1 ka koi bhi perm > s2 se or vice versa then return true
         sort(s1.begin(),s1.end());
         sort(s2.begin(),s2.end());
         bool canS1Break=true,canS2Break=true;
         // check agar s1 break kr sakta h
         for(int i=0; i<n; i++){
             if(s1[i]<s2[i]){
                canS1Break=false;
             }
         }
         if(canS1Break==true){ // mltb s1 ke sare elements s2 se bade
             return true;
         }
         else{ // false h to chek kr can s2 break s1?
               for(int i=0; i<n; i++){
                    if(s2[i]<s1[i]){
                        canS2Break=false;
                    }
               }
               if(canS2Break) return true;
         }
         return false;
    }
};
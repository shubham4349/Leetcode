class Solution {
public: 
    bool isSimiliar(string a, string b){
         set<char> one(a.begin(),a.end());
         set<char> two(b.begin(), b.end());

         if(one==two) return true;
         return false;
    }
    int similarPairs(vector<string>& words) {
        int count=0;
        for(int i=0; i<words.size(); i++){
             for(int j=i+1; j<words.size(); j++){
                //   bool isSimiliar= ;
                  if(isSimiliar(words[i],words[j])) count++;
             }
        }
        return count;
    }
};
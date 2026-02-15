class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        map<int,char> alphaMap;
        int i=0;
        for(char ch='z'; ch>='a'; ch--){
            alphaMap.insert({i,ch});
            i++;
        }
        map<char,int> wordsMap;
        int j=0;
        for(char ch='a'; ch<='z'; ch++){
            wordsMap.insert({ch,weights[j]});
            j++;
        }
        string ans="";
        for(auto& s:words){
            int sum=0;
            for(char& ch:s){
              sum+=wordsMap[ch];
            }
            sum=sum%26;
            ans+=alphaMap[sum];
        }
        return ans;
    }
};
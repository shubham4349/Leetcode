class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
       unordered_set<char> jewelset(jewels.begin(), jewels.end());
        int count=0;
       for(int i =0; i<stones.length(); i++){
         if(jewelset.count(stones[i])) count++;
       }
       return count;
    }
};
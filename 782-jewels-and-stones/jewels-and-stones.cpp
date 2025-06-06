class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        int j= jewels.length();
        int s = stones.length();
        int count=0;
        for(int i =0; i<j; i++){
            for(int k=0; k<s; k++){
                if(jewels[i]==stones[k]) count++;
            }
        }
        return count;
    }
};
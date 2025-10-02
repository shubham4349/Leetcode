class Solution {
public:
    int maxNumberOfBalloons(string text) {
        
        map<char,int> count;
        for(char ch: text){
            count[ch]++;
        }
        return min({
            count['b'],count['a'],count['l']/2,count['o']/2,count['n']
        });
    }
};
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int checkCol;
        if(ruleKey=="type") checkCol=0;
        else if(ruleKey=="color") checkCol=1;
        else checkCol=2;

        int r=items.size();
        int c=items[0].size();
        int cnt=0;
        for(int i=0; i<r; i++){
            if(items[i][checkCol]==ruleValue) cnt++;
        }
        return cnt;
    } 
};
class Solution {
public:
    bool squareIsWhite(string coordinates) {
        // x,y
        // x-> a-1,b-2
        // if x is odd and y is odd-> black
        // if x is even and y is even -> black
        // else white
        int i=1;
        map<char,int> mp;
        for(char ch='a'; ch<='h'; ch++){
            mp.insert({ch,i});
            i++;
        }
        coordinates[0]='0'+mp[coordinates[0]];
        for(int i=0; i<coordinates.size(); i++){
            int x=coordinates[0]-'0';
            int y=coordinates[1]-'0';
            if(x%2==0 and y%2==0) return false;
            else if(x%2==1 and y%2==1) return false;
        }
        return true;


    }
};
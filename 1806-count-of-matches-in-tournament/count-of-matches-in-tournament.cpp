class Solution {
public:
    int numberOfMatches(int n) {
        
        // int matches =0;
       
        // int teams = n;
        // long long count = 0;

        // while(matches !=1){
        //     if(teams%2==0){
        //         matches = teams/2;
        //         count+=matches;
        //         teams = teams/2;
        //     }
        //     else{
        //         matches = (teams-1)/2;
        //         count+=matches;
        //         teams= (teams-1)/2 + 1;
        //     }
        // }
        // return count;
        return n-1;
    }
};
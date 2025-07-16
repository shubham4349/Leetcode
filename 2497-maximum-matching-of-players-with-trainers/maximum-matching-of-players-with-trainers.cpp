class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        
        sort(begin(players),end(players));
        sort(begin(trainers), end(trainers));
        int n=players.size();
        int m=trainers.size();
        int i=0,j=0,count=0;
        while(i<n and j<m){
            if(players[i]<=trainers[j]){
                count++;
                i++;j++; // kyuki vo idx cover inclde hogya h
            }else j++;
        }
        return count;
    }
};
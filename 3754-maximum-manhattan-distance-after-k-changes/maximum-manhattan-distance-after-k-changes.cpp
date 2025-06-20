class Solution {
public:
    
    int maxDistance(string s, int k) {
         int n=s.length();
         int x=0,y=0;
         int ans=0;
         for(int i=0; i<n; i++){
             if(s[i]=='N') y++;
             else if(s[i]=='S') y--;
             else if(s[i]=='E') x++;
             else if(s[i]=='W') x--;

             int actual_dist= abs(x)+abs(y);
             // N ko S me badlne me net change +1 se -1 ko badlna yani |2| , that's why 2k
             int maxm_possible_dist=actual_dist + 2*k;
              //  At step 2 (i = 1), actual_dist = 1, k = 3
                // Then: maxm_possible_dist = 1 + 6 = 7
                // But i + 1 = 2, to max 2 units hi door ja sakte ho ab tak.
             int dist= min(maxm_possible_dist, i+1);// jyada se jyada i+1 hi chal sakte ho
             ans = max(ans,dist);
         }
       return ans;
    } 
};

// Initial approach: 
// ye galt hota kyuki isme abs value ka summation nhi hua h

        // int n=s.length();
        // vector<int> dirn(2,0);
        // int maxm=0;
        // for(int i=0; i<n; i++){
        //     if(s[i]=='N') {
        //         dirn[1]++;
        //     }else if(s[i]=='W'){
        //         dirn[0]--;
        //     }else if(s[i]=='E'){
        //         dirn[0]++;
        //     }else{
        //         dirn[1]--;
        //     }
        //     int sum = accumulate(dirn.begin(), dirn.end(),0);
        //      maxm = max(maxm, sum);
        // }
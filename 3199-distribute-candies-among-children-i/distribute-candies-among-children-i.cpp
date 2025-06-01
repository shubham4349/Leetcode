class Solution {
public:
    int distributeCandies(int n, int limit) {
        
        int count=0;

         // x + y + z = n;
        // x,y,z <= limit;
        // find suitable x,y,z
       
       // checking all possible values: 
        for(int x=0; x<=min(n,limit); x++){ // what if candy=5, but limit is 10
            for(int y=0; y<=min(n-x, limit); y++){
                for(int z=0; z<=min(n-x-y,limit); z++){
                    if(x+y+z ==n) count++;
                }
            }
        }
        return count;


    }
};
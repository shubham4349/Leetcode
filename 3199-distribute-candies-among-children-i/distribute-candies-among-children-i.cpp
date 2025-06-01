class Solution {
public:
    int distributeCandies(int n, int limit) {
        
        int count=0;

         // x + y + z = n;
        // x,y,z <= limit;
        // find suitable x,y,z
       
       // checking all possible values: 
        for(int x=0; x<=limit; x++){
            for(int y=0; y<=limit; y++){
                for(int z=0; z<=limit; z++){
                    if(x+y+z ==n) count++;
                }
            }
        }
        return count;


    }
};
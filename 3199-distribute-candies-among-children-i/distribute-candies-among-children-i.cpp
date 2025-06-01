class Solution {
public:
    int distributeCandies(int n, int limit) {
        
        int count=0;

         // x + y + z = n;
        // x,y,z <= limit;
        // find suitable x,y,z
       
       
        for(int x=0; x<=min(n,limit); x++){ // for child1
            for(int y=0; y<=min(n-x, limit); y++){// for child2 
                
                int z = n-x-y;
                if(z<=limit and z>=0) count++;
            }
        }
        return count;


    }
};
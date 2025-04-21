class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
       
       int diffsize = differences.size();
        vector<int> hidd(diffsize+1);
      
      // hidd[0] = 3;

      int current = 0;
       
       int minval = 0;
       int maxval = 0;

        for(int i = 0; i<diffsize; i++){

            // hidd.push_back(hidd[i]+differences[0]);

            current += differences[i];

            minval = min(minval, current);
            maxval = max(maxval, current);

            if(upper-maxval -(lower -minval) +1 <=0  ) return 0;
        }
        return upper-maxval -(lower -minval) +1;
    }
};
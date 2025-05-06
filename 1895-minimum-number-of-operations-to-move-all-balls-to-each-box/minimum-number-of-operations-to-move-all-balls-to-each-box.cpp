class Solution {
public:
    vector<int> minOperations(string boxes) {
        
        // boxes.lenght is number of boxes
        // box[i] = 0 -> ith box is empty
        // box[i] = 1 -> ith box is havin one ball

        /// adjacent condn = abs(i-j) ==  1 , i and j boxes are adjacent

       // problem statement;
       // 110 ->>"0" sare ball ko 3rd idx pe lane ke liye total kitna move laga
       // yani 2nd ball 1 move krega, + 1st ball ko 2 move krna hoga so answer is 3
        vector<int> ans(boxes.length(),0);

        for(int i =0; i<boxes.length(); i++){
            for(int j = 0; j<boxes.length(); j++){
                  
                 
                     if(boxes[j]=='1') {
                        ans[i]+= abs(i-j);
                     }
                 
            }
        }
        return ans;


    }

};
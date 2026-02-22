class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int n=nums.size();
        int score1=0; // fist player ka score
        int score2=0;
        
        bool active1=true; // first player ki state
        bool active2=false;
        for(int i=0; i<n; i++){
           if((nums[i]%2==1)){ // odd pnt pe swap
              if(active1){
                active1=false;
                active2=true;
              } else{
                 active1=true;
                 active2=false;
              }
           }
           if((i+1)%6==0){ //  every 6th game pe swap
              if(active1){
                active1=false;
                active2=true;
              } else{
                 active1=true;
                 active2=false;
              }
           }

           if(active1){
             score1+=nums[i];
           }else score2+=nums[i];

        } 
        return score1-score2;
    }
};
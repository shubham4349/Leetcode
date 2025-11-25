class Solution {
public:
    int waviness(int num){
         if(num<101) return 0;
         int wavyCnter=0;
         string n=to_string(num);
         for(int i=1; i<=n.size()-2; i++){ // pehla aur last chor ke
              int prev=(n[i-1])-'0';
              int curr=(n[i])-'0';
              int after=(n[i+1])-'0';
              if(curr> prev and curr>after) wavyCnter++;
              else if(curr<prev and curr<after) wavyCnter++;
         }
         return wavyCnter;
    }
    int totalWaviness(int num1, int num2) {
        
        int ans=0;
        for(int i=num1; i<=num2; i++){
            ans+=waviness(i);
        }
        return ans;
    }
};
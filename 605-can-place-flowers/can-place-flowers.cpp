class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size=flowerbed.size();
        if(size==1){
            if(flowerbed[0]==0){
                if(n==0 or n==1) return true;
                else return false; 
            }  
            else{
                if(n==0) return true;
                else return false;
            }
        }

        if(size>1){
             if(n==0) return true;
             if(flowerbed[0]!=1 and flowerbed[1]!=1){
                flowerbed[0]=1;
                n--;
              }
        }
        if(n!=0){
             for(int i=1; i<size-1; i++){
                if(flowerbed[i]!=1){
                if(flowerbed[i-1]!=1 and flowerbed[i+1]!=1){
                    flowerbed[i]=1;
                    n--;
                }
            }
        }
        }
        if(n!=0){
            if(flowerbed[size-1]!=1 and flowerbed[size-2]!=1){
             flowerbed[size-1]=1;
             n--;
           }
        }
        return n<=0;
    }
};
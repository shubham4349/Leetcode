class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        
        int iniMax=numBottles;
        int bottles=0;
        int newBottles=numBottles;
        
        while(newBottles>=numExchange){
            bottles+= newBottles/numExchange;
            newBottles=newBottles/numExchange+ newBottles%numExchange;
        }
        return iniMax+bottles;
    }
};
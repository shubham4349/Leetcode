class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        // int total_gas = accumulate(gas.begin(), gas.end(),0);
        // int total_cost= accumulate(cost.begin(), gas.end(),0);
        int total_gas=0;
        int total_cost=0;
        int n=gas.size();
        int tank=0; 
        int start=0;
        for( int i=0; i<n; i++){
            total_gas +=gas[i];
            total_cost +=cost[i];
            tank +=(gas[i]-cost[i]);
           // if(tank<)
            if(tank<0) {
                tank=0;
                start = i+1;
            }
        }
        return (total_gas>=total_cost ? start : -1);
    }
};
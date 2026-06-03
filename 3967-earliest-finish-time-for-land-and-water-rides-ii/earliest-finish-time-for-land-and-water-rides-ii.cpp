class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int n=landDuration.size(), m=waterDuration.size();

        // case 1-> pehle land fir water
        // find minm land finish time
        int minLandFinish=INT_MAX;
            // land ride 
        for(int i=0; i<n; i++){
            minLandFinish=min(minLandFinish,landStartTime[i]+landDuration[i]);
        }
           // water ride
        int minWaterFinish=INT_MAX;
        for(int i=0; i<m; i++){
            // 2 case bante h
            // agar water start time <= minLandFinish -> toh just add dur
            if(waterStartTime[i]<=minLandFinish){
                minWaterFinish=min(minWaterFinish,minLandFinish+waterDuration[i]);
            } else{
                minWaterFinish=min(minWaterFinish,waterStartTime[i]+waterDuration[i]);
            }
        }
        int ans0=minWaterFinish;

         // case 2-> pehle water fir land
        // find minm water finish time
        int minWaterFinish1=INT_MAX;
            // water ride 
        for(int i=0; i<m; i++){
            minWaterFinish1=min(minWaterFinish1,waterStartTime[i]+waterDuration[i]);
        }
           // land ride
        int minLandFinish1=INT_MAX;
        for(int i=0; i<n; i++){
            // 2 case bante h
            // agar land start time <= minWaterFinish -> toh just add dur
            if(landStartTime[i]<=minWaterFinish1){
                minLandFinish1=min(minLandFinish1,minWaterFinish1+landDuration[i]);
            } else{
                minLandFinish1=min(minLandFinish1,landStartTime[i]+landDuration[i]);
            }
        }
        int ans1=minLandFinish1;

        return min(ans0,ans1);

    }
};
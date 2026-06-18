class Solution {
public:
    double angleClock(int hour, int minutes) {
         // concept--
         // minute hand case
         // circle me 360 degree and clock me total 60 min hote h
         // so ek minute angle 360/60 = 6 degree

         // hour hand case 
         // total 12 hour o, i hour 30 degree ka hua
         // but hour thoda minute ke sath bhi move krta h
         // that it 0.5* minute 
         // so deg due to hour = 30*hr + 0.5*min (12 se degree cnt start)

         double minAngle=6*minutes;

         double hourAngle= 30*hour+0.5*minutes; 
         // 30 degree hour change hone ke karan and 0.5 minute change hone ke karan hilega
         double diff= abs(hourAngle-minAngle);

         return min(diff,360-diff); // chota wala angle hmesa

    }
};
#define db double
class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {
        double angles;
        // total angle= 180
        // maths
        // agar sare sides diye ho to angle find krne ke liye
        // law of cosines ka use kro
        // cos A = (b2+c2-a2)/2bc 
        // A= cos inv(whole thing!!) // defalt angle radian me aata h
        sort(sides.begin(),sides.end());
        double a=sides[0],b=sides[1],c=sides[2];

        if(a+b<=c) return {}; // tiangle nhi h

        // acos method cpp
        // cos(60) = 0.5
        // acos(0.5) = 60 angle 
        double angleA= acos((b*b+c*c-a*a)/(2*b*c));
        double angleB= acos((a*a+c*c-b*b)/(2*a*c));
        double angleC= acos((b*b+a*a-c*c)/(2*b*a));

        // pi me convert kr
        double pi=acos(-1);
        angleA*=180.0/pi;
         angleB*=180.0/pi;
          angleC*=180.0/pi;

        vector<double> ans={angleA,angleB,angleC};
        sort(ans.begin(),ans.end());
        return ans;
    }
};
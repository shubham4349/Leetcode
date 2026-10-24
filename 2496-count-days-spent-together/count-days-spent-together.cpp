class Solution {
public:
    int helper(string& s, vector<int>& nums){
        int n=nums.size();
        int month=(s[0]-'0')*10+s[1]-'0'; // 08 
        int extraDay=(s[s.size()-2]-'0')*10+s[s.size()-1]-'0'; // 15
        int days=0;
        // month 1 se start pe 8 h, 
        // so 0 se start pe 7
        for(int i=0; i<month-1; i++){
            days+=nums[i]; // months[i]
        }
        days+=extraDay;
        return days;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        // ek 31 size ka vector lo
        // usme sbme 0 assign kro
        // alice ke duration ke liye vector++;
        // bob ke liye bhi vec++;
        // jitne final element 2 hogye return that

        vector<int> months={31,28,31,30,31,30,31,31,30,31,30,31};
        vector<int> days(366,0); // sbse 0 h initially
        int arrA,leaveA;
        int arrB,leaveB;
        
        // int daysA=0;
        // for(int i=0; i<stoi(arriveAlice[0]+arriveAlice[1])-1; i++){
            
        // }
        arrA=helper(arriveAlice,months);
        leaveA=helper(leaveAlice,months);
        arrB=helper(arriveBob,months);
        leaveB=helper(leaveBob,months);

        for(int i=arrA; i<=leaveA; i++){
            days[i]++;
        }
        for(int i=arrB; i<=leaveB; i++){
            days[i]++;
        }
        int cnt=0;
        for(int i=0; i<=365; i++){
            if(days[i]==2) cnt++;
        }
        return cnt;
    }
};
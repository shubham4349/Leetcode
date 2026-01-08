class Solution {
public:
    string intToRoman(int num) {
        // 3749-> 3000+700+40+9
        vector<int> nums;
        int place=1;
        while(num>0){
            int digit=num%10;
            nums.push_back(digit*place);//9,40,700..
            place*=10;
            num/=10; 
        }
        reverse(nums.begin(),nums.end());
        string ans="";
        for(int num:nums){
            if(num>=1000){
                int cnt=num/1000;
                while(cnt--)ans+='M';
            }
             else if(num==900)ans+="CM";// 900
            else if(num>=500){
                ans+='D'; 
                int remaining=num-500;
                remaining/=100;
                while(remaining--) ans+='C';
            } else if(num==400)ans+="CD"; // 400
            else if(num>=100){
                 int cnt=num/100;
                 while(cnt--)ans+='C';
            } else if(num==90)ans+="XC"; // 90
            else if(num>=50){
                  ans+='L'; 
                  int remaining=num-50;
                  remaining/=10;
                 while(remaining--) ans+='X';
            } else if(num==40)ans+="XL";// 40
            else if(num>=10){
                 int cnt=num/10;
                 while(cnt--)ans+='X';
            }else if(num<10){
                 if(num==1) ans+='I';
                 else if(num==2)ans+="II";
                 else if(num==3)ans+="III";
                 else if(num==4)ans+="IV";
                 else if(num==5)ans+="V";
                 else if(num==6)ans+="VI";
                 else if(num==7)ans+="VII";
                 else if(num==8) ans+="VIII";
                 else if(num==9)ans+="IX";
            }
        }
        return ans;
    }
};
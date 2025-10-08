class Solution {
public:
    string deciToBinary(int num){
        string bin="";
           while(num>0){
             int digit=num%2;
             bin+= to_string(digit);
             num=num/2;
           }
           reverse(bin.begin(),bin.end());
        return bin ;

    }
    string convertDateToBinary(string date) {
        string year="",month="",daate="";
        
        for(int i=0;i<=3; i++){
             year+=date[i];
        }
        int yr=stoi(year);
        for(int i=5; i<=6; i++){
            month+=date[i];
        }
        int mnth=stoi(month);
        for(int i=8; i<=9; i++){
            daate+=date[i];
        }
        int dte=stoi(daate);
        string a=deciToBinary(yr);
        string b= deciToBinary(mnth);
        string c= deciToBinary(dte);

        string final= a+"-"+b+"-"+c;
        return final;


    }
};
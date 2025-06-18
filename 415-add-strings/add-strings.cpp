class Solution {
public:
    string addStrings(string num1, string num2) {
        
        int n1=num1.length();
        int n2= num2.length();

        int p1= n1-1; // num1 ka last character
        int p2= n2-1;

        int carry=0;
        string ans ="";

        while(p1>=0 or p2>=0 or carry){
            int a,b;

            if(p1>=0){
                a= num1[p1]-'0';
                p1--;
            }else a=0;

            if(p2>=0){
                b= num2[p2]-'0';
                p2--;
            }else b=0;

            int sum= a +b+ carry;
            carry = sum/10 ; // 13/10 me carry =1;
            ans += (sum%10) + '0';
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
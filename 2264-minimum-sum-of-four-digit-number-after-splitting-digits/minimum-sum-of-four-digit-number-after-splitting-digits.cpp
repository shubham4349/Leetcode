class Solution {
public:
    int minimumSum(int num) {
        string n=to_string(num);

        sort(n.begin(),n.end());
        string num1="",num2="";
        num1+=n[0];
        num2+=n[1];
        num1+=n[2];
        num2+=n[3];
        int x=stoi(num1);
        int y=stoi(num2);
        return x+y;

    }
};
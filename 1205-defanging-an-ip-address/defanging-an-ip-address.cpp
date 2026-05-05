class Solution {
public:
    string defangIPaddr(string address) {
        string hello="";
        for(int i=0; i<address.size(); i++){
            if(address[i]!='.') hello+=address[i];
            else{
                // . aagya
                hello+='[';
                hello+=address[i]; // jo ki dot h
                hello+=']';
            }
        }
        return hello;
    }
};
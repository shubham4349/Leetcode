class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();

        int start = 0;
        int end = n-1;

        while(start<end){
            swapp(s[start], s[end]);
            start++;
            end--;
        }
    }
    vector<char> swapp( char& a, char& b ){

        char temp = a;
        a = b;
        b = temp;

        return {a,b};
    }
    // yha pe u should have used builtin swap funtion
};
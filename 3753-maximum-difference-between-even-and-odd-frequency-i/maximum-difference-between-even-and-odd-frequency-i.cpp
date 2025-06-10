class Solution {
public:
    int maxDifference(string s) {
        // question bolra-- > maximise a1-a2 
        // yani maxm a1 - minm a2

        int n= s.length();
        int max_odd=INT_MIN, min_even=INT_MAX;

        unordered_map<char,int> freq;
        for(int i =0; i<n; i++){
            freq[s[i]]++;
        }

        for(int i =0; i<n; i++){
            if(freq[s[i]]%2==0){ // even rhne pe min even nikal
                min_even= min(min_even, freq[s[i]]);
            }else{ // odd pe max odd
                max_odd= max(max_odd, freq[s[i]]);
            }
        }
          
          return max_odd -min_even;

    }
};
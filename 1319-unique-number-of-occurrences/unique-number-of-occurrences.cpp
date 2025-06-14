class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        int n=arr.size();

        unordered_map<int,int> map;

        for(int i=0; i<n; i++){
            map[arr[i]]++;
        }
        unordered_set<int> hello;
        // travesing the map
        for(auto it=map.begin(); it!=map.end(); it++){
            int cnt = it->second; // map ki value

            if(hello.count(cnt)){ 
                return false;
            }
            hello.insert(cnt);
        }
        return true;
    }
};
class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int a=apple.size();
        int c=capacity.size();
        sort(begin(capacity),end(capacity),greater<int>());
        int appleSum=accumulate(apple.begin(),apple.end(),0);
        int capacitySum=0;
        int i=0;
        while(capacitySum<appleSum and i<c){
            capacitySum+=capacity[i];
            i++;
        }
        return i;
        
    }
};
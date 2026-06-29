class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        // pehla element-> 1
        // abs(i,i+1) <=1 
        // u can decrease value, badha nhi skte
        // rearrange ekements
        // to find-> maxumal ele after doin these operations
        int n=arr.size();
        sort(arr.begin(),arr.end());
        arr[0]=1;
        // arr- 1,1,100 -> isme max 1,2,3 yani 3 hoga
        for(int i=1; i<n; i++){
            // number ko minimize hi kr skte ho, badha nhi skte
             // curr=min(curr,prev+1)
             arr[i]=min(arr[i],arr[i-1]+1); // yhi krke max ele banana h
        }
        return arr[n-1];



    }
};
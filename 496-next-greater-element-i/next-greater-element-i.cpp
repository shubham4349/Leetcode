class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(), n2=nums2.size();
        // normal version
        // arr= 1,3,4,2
        // -> sabka next greater find kr
        // ans= 3,4,-1,-1 

        // for(int i=n-1; i>=0; i--){ // nge in right(so move r->l)
        //     if(!st.empty() and st.top()<=arr[i])st.pop
        //  ans[i] = st.empty()? -1:st.top();
        //     st.push(arr[i]);
        // } 
        map<int,int> mp;
        stack<int> st;
        for(int i=n2-1; i>=0; i--){
            while(!st.empty() and nums2[i]>=st.top()){
                 // we want the top element to be maxm
                 // monotonic-> either increasing or decre..
                 st.pop(); 
            } 
            mp[nums2[i]]=st.empty()?-1:st.top();
            // -1 means koi element bada nhi h right me
            st.push(nums2[i]);
        }
        vector<int> ans;
        for(int num:nums1) ans.push_back(mp[num]);
        return ans;
    }
};
class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int dist=0;
        int i=0;
        int j=0;
        while(i<n and j<m){
           if(i<=j and nums1[i]<=nums2[j]){
             dist=max(dist,j-i);
             j++; // j ko bada kro, taki j-i ki value maxm aaye
           } else if(i<=j) i++; // nums1 ko chota kro
           else j++;
        }
        return dist;
    }
};
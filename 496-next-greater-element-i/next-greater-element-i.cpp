class Solution {
public:
    int maxRight(vector<int>& arr2, int j) {
        for (int i = j + 1; i < arr2.size(); i++) {
            if (arr2[i] > arr2[j]) {
                return arr2[i];
            }
        }
        return -1;
    }

    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp;

        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    int nextGreater = maxRight(nums2, j);
                    temp.push_back(nextGreater);
                    break; 
                }
            }
        }

        return temp;
    }
};

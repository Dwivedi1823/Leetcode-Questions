class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans;
        int m = nums1.size();
        int n = nums2.size();
        int i = 0, j = 0;
        vector<int> v;
        while(i < m and j < n){
            if(nums1[i] < nums2[j])
                v.push_back(nums1[i++]);
            else if(nums1[i] > nums2[j])
                v.push_back(nums2[j++]);
            else if(nums2[j] == nums1[i]){
                v.push_back(nums1[i++]);
                v.push_back(nums2[j++]);
            }
        }
        while(i < m)
            v.push_back(nums1[i++]);
        while(j < n)
            v.push_back(nums2[j++]);
        
        if((m + n)%2 == 0)
            return (double)(v[((m+n)/2) - 1] + v[((m+n)/2)])/2;
        else
            return (double)v[ceil((m+n)/2)];
    }
};

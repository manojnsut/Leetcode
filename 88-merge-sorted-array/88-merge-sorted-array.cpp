class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int s1 = m - 1, s2 = n - 1, s3 = n + m -1;
        while(s1 >= 0 && s2 >= 0) {
            if( nums1[s1] > nums2[s2])
                nums1[s3--] = nums1[s1--];
            else
                nums1[s3--] = nums2[s2--];
        }
        while(s2>=0)
            nums1[s3--] = nums2[s2--];
    }
};
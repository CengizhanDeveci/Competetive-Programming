#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        for(int total = (m--) + (n--) - 1; total >= 0; total--)
        {
            if(m >= 0 && n >= 0)
                if(nums1[m] < nums2[n])
                    nums1[total] = nums2[n--];
                else
                    nums1[total] = nums1[m--];
            else if (m >= 0)
                nums1[total] = nums1[m--];
            else
                nums1[total] = nums2[n--];
        } 
    }
};
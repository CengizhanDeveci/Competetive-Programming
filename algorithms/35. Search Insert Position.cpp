class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size() -1;
        int mid = (left + right)/2;
        while(left < right){
            
            if(nums[mid] < target) left = mid + 1;
            else right = mid;
            mid = left + (right - left) / 2;
        }  
        return (nums.size()-1 == mid && target > nums[mid]) ? mid + 1 : mid;
    }
};
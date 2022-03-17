class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int min1 = 10001, min2 = 10001, max1 = 0, max2 = 0;
        for(int i = 0; i < size(nums); i++){
            if(min1 > nums[i]){
                if(min1 < min2) min2 = min1;
                min1 = nums[i];
            }else if(min2 > nums[i]){
                if(min2 < min1) min1 = min2;
                min2 = nums[i];
            }
            if(max1 < nums[i]){
                if(max1 > max2) max2 = max1;
                max1 = nums[i];
            }else if(max2 < nums[i]){
                if(max2 > max1) max1 = max2;
                max2 = nums[i];
            }
        }
        return max2 * max1 - min1 * min2;
    }
};
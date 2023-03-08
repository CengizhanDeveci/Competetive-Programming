#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left = 0;
        int right = 0;
        int index = 0;
        for(int i = 1; i < nums.size(); i++){
            right += nums[i];
        }
        for(; index < nums.size(); index++){
            if(right == left) return index;
            left += nums[index];
            if(index != nums.size() - 1) right -= nums[index + 1];
        }
        return -1;
    }
};
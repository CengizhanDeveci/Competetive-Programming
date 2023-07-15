#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        if(nums.size() == 0) return 0;
        int result = 0;
        int index = 0;
        int count = 0;
        int val = nums[0];

        for(int i = 0; i < nums.size(); i++)
        {
            if(val == nums[i])
            {
                if(++count <= 2)
                {
                    nums[index++] = nums[i];
                    result++;
                }
            }
            else
            {
                val = nums[i];
                result++;
                count = 1;
                nums[index++] = nums[i];
            }
        }    
        return result;
    }
};
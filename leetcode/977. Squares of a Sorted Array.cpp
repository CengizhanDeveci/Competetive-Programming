class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int place = nums.size() - 1, begin = 0;
        int end = place;
        vector<int> result(place+1,0);
        while(place >= 0){
            if(abs(nums[begin]) < abs(nums[end])){
                result[place] = nums[end] * nums[end];
                place--;
                end--;
            }else{   
                result[place] = nums[begin] * nums[begin];
                place--;
                begin++;
                
            }  
        }  
        return result;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int ind1 = 0, ind2 = numbers.size()-1;
        while(ind1 < ind2){
            if(numbers[ind1] + numbers[ind2] == target){
                res.push_back(ind1+1);
                res.push_back(ind2+1);
                break;
            }else if(numbers[ind1] + numbers[ind2] > target) ind2--;
            else ind1++;
        }
        return res;
    }
};
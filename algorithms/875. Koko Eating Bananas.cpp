#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    int helperBinary(vector<int>& piles, int left, int right, int h){
        int mid = (left + right) / 2;
        int neededHour = 0;
        if(left == right){
            return left;
        }
        for(int i = 0; i < piles.size(); i++){
            neededHour += ceil((double)piles[i] / (double)mid);
            if(neededHour > h) return helperBinary(piles, mid + 1, right, h);
        }
        return helperBinary(piles, left, mid, h);
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        return helperBinary(piles, 1, 1000000000, h);
    }
};
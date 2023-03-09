#include <iostream>

using namespace std;

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int result = 0;        
        do while(numBottles / numExchange){
            result += numBottles;
            numBottles = (numBottles / numExchange) + (numBottles % numExchange);
        }
        return result + numBottles;
    }
};